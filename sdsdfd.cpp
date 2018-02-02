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
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			crr[i][j] = gcd(arr[i],brr[j]);
		}
	}
	
	while(q--){
		set<int>s;
		int r1,c1,r2,c2;
		cin>>r1>>c1>>r2>>c2;
		for(int i=r1;i<=r2;i++)
		{
		   for(int j=c1;j<=c2;j++)
		   {
		   	s.insert(crr[i][j]);
		   }
		   
		   // cout<<endl;   
		}
		cout<<s.size()<<endl;
	}
}
