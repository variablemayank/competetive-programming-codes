#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main()
{
	ios_base::sync_with_stdio(false);
	long long  n,m,q;
	cin>>n>>m>>q;
	vector<int> arr(n+1);
	vector<int> brr(m+1);
	long long  crr[n][m];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int j=0;j<m;j++) cin>>brr[j];
	
	while(q--){

		int r1,c1,r2,c2;
		cin>>r1>>c1>>r2>>c2;
		int ca[100005]={0};
		int cb[100005] ={0};
		for(int i=r1;i<=r2;i++)
		{
			ca[arr[i]]++;
			
		}
		for(int i =c1;i<=c2;i++)
		{
			cb[brr[i]]++;
		}
		long long ans[100005]= {0};
 		for(int i=1;i<100005;i++)
		 {
 			int cntA =0;
 			int cntB =0;
 			for(int j=i;j<100005;j+=i)
 			{
 				cntA += ca[j];
 				cntB += cb[j];
			}
			ans[i] = cntA *cntB;
		 }
		   // cout<<endl;   
	
		int count =0;
		for(int i=100005;i>=1;i--)
		{
			for(int j=2*i;j<100005;j+=i)
			ans[i] -= ans[j];
			if(ans[i]) ++count;
		}
		cout<<count<<endl;
	}
}
