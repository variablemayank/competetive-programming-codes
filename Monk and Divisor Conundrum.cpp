#include<bits/stdc++.h>
using namespace std;
 

int arr[200005];
int freq[200005];

void seive()
{
	 for(int i=1;i<=200000;i++)
	 {
	 	for(int j=i;j<=200000;j=j+i)
	 	{
	 	  freq[i] += arr[j];
		}
	 }
}	


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
	cin>>n;

	for(int i=0;i<n;i++) 
	{
		int k;
		cin>>k;
		arr[k]++;
	}
	seive();
	int q;
	
	cin>>q;
    int x,y;
	while(q--)
	{
	    cin>>x>>y;
		int intersection = (x*y)/__gcd(x,y);
		if(intersection>200000) cout<<freq[x]+freq[y]<<endl;
		else cout<<freq[x]+freq[y]-freq[intersection]<<endl;
	}
}

