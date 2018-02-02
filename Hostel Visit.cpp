#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
ll fast_exp(ll base, ll exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base);
       base=(base*base);
       exp/=2;
    }
    return res;
}


ll main()
{
	ll q,k;
	cin>>q>>k;
	priority_queue<ll> pq;
	for(ll i=0;i<q;i++)
	{
		ll a,b,c;
		cin>>a;
		if(a==1)
		{
			ll b,c;
			cin>>b>>c;
			ll soln  = fast_exp(b,2) +fast_exp(c,2);
			if(pq.size()==k)
			{
			
              if(soln<pq.top()) 
	          {
			 
	          	  pq.pop();
			      pq.push(soln);
		      }
		    
			}
			  else
		      {
		      	pq.push(soln);
			  }
		}
		if(a==2)
		{
		    cout<<pq.top()<<endl;
		}
	}
	return 0;
}
