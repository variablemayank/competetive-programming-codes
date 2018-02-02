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
	  // for(ll i=2;i<=100;i++) 
	//   if(prime[i]) cout<<i<<" ";
	}
	
	int main()
	{
		jadu;
		seive();
		vi vec;
		for(int i=2;i<=1003;i++)
		{
			if(prime[i]) vec.push_back(i);
		}
		bool check[1010]={false};
		for(int i=0;i<vec.size();i++)
		{
		  int x = 1+vec[i] +vec[i+1];
		  if(x<1010 && prime[x])  check[x] = true;
		}
		int n,k;
		cin>>n>>k;
		for(int i=2;i<=n;i++)
		{
			if(check[i]) k--;
		}
		if(k<=0) cout<<"YES";
		else cout<<"NO";
		return 0;
	}
