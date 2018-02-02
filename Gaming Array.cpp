#include<bits/stdc++.h>
using namespace std;
#define ll long long 
vector<ll>v(1e5);
ll maax(ll n)
{
	ll maxgg= 0;
	for(int i=0;i<n;i++)
	{
	 	maxgg = max(v[i],maxgg);
	}
	return maxgg;
	
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		long long  maxi =0;
        for(int i=0;i<n;i++) 
		{
		cin>>v[i];
	    }
	    int i=0;
	    long long count =0;
	    while(i!=n)
	    {
	       ll  k = maax(n);
	    for( int j=0;j<n;j++)
        {
        	if(v[j]==k)
        	{
        		count++;
        		n= j;
			    break;
			}
			
		}
		}
        if(count%2==0) cout<<"ANDY\n";
        else  cout<<"BOB\n";
	}
}
