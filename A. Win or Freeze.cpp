	/* Template By Mayank Sharma
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
    
   
    ll factorcount[3003];
    bool prime[3003];
    void seive()
    {
    	memset(prime,true,sizeof(prime));
       for(ll i=2;i<=3003;i++)
       {
       	  if(prime[i])
       	  {
       	    for(ll j=i*2;j<=3003;j+=i)	
       	    prime[j] = false;
		  }
	   }
	   for(ll i=2;i<=100;i++) 
	   if(prime[i]) cout<<i<<" ";
	}
    void generate()
    {
    	for(ll i=1;i<=3003;i++)
    	{
    	    factorcount[i] = 0;
		}
		
		for(ll i=2;i<=3003;i++)
		{
			if(prime[i] && factorcount[i] ==0)
			{
				for(ll j=i;j<=3003;j+=i)
				{
					factorcount[j]++;
				}
			}
		}
	}
	
	
	int main()
	{
		int t;
		cin>>t;
		int count =0;
		vector<int> vec;
		for(int i=2;i<=t-1;i++)
		{
			if(t%i==0)
			{
				count++;
				vec.push_back(i);
			}
		}
		cout<<count<<endl;
		if(count%2==0) cout<<"2";
		else
		{
			cout<<"1\n";
			cout<<vec[0];
		}
	}
