#include<bits/stdc++.h>
#include<cstring>
#define ll long long 
using namespace std;
int main()
{ 
    ll  t,n,m,x,y;
	cin>>t;
	ll A[100000]={0};
    	
    while(t--)
    {
    	cin>>n;
    		for(ll i=0;i<n;i++)
    	{
    		cin>>A[i];
			 
		}
		sort(A,n);
    for(ll i=0;i<n/2;i++)
		{
		x=(A[i+1]-A[i]);
		y=A[i+2]-A[i+1];
			if(x==y)
			{
				m=1;
			}	
			else
			{
				m=0;
			}
		}
		if(m==1)
		{
			cout<<"YES\n";
		}
		if(m==0)
		{
		cout<<"NO\n";
		}
	}
	return 0;
}
