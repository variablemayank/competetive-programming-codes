		/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (ll i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	#define sz(c)     (ll)c.size()
	typedef long long ll;
	typedef vector<ll> vi;
	typedef pair<ll,ll> pi;
    
    ll factorcount[5000005];
    ll pre[5000005];
    
	 main()
	{
		jadu;
		
		for(int i=0;i<5000005;i++) 
		factorcount[i] =0;
		
		for(ll i=2;i <5000005;i++)
		{
			if(factorcount[i] ==0)
			{
		    	ll p = i;
				while(p<5000005)
				{
					 for(ll j=p;j<=5000005;j+=p)
					 {
					   factorcount[j]++;	
					 }
					 p*=i;	
				}	
			} 
		}
	
		pre[0] =0;
		for(int i=1;i<=5000005;i++)
		{
			pre[i] =pre[i-1] + factorcount[i];
		}
		
	    int t;
	    scanf("%d",&t);
	    while(t--)
	    {
	    	ll a,b;
	    	scanf("%lld%lld",&a,&b);
	    	printf("%lld\n",pre[a]-pre[b]);
		}
	} 
