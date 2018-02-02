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
    
   
    
    bool prime[10005];
    void seive(int n)
    {
    	memset(prime,true,sizeof(prime));
       for(ll i=2;i<=n;i++)
       {
       	  if(prime[i])
       	  {
       	    for(ll j=i*2;j<=n;j+=i)	
       	    prime[j] = false;
		  }
	   }
	   //for(ll i=2;i<=n;i++) 
	   // if(prime[i]) cout<<i<<" ";
	}
    
    int main()
    {
    	jadu;
    	int t;
    	vector<int>vec(10005);
    	while(cin>>t)
    	{
    	
    		int maxi =-1e9;
    		for(int i=1;i<=t;i++)
    		{
    			cin>>vec[i];
    			maxi = max(maxi,vec[i]);
			}
				int total = (t*(t-1)*(t-2)*(t-3))/24;
			seive(maxi);
			long long sum =0;
	
	        bool check[maxi+1] = {false};
			for(int i=2;i<=maxi;i++)
			{
				int count =0;
				if(prime[i]== true)
				{
				  for(int j=1;j<=t;j++)
				  {
				  	if(vec[j]%i ==0 &&check[j]==false)
				  	{
				  	  count++;  	
				  	  check[j] = true;
					}
				  }
				}
				cout<<"count"<<count<<endl;
				if(count>=4)
				{
					sum += (count*(count-1)*(count-2)*(count-3))/24;
				}	
			}
			cout<<total-sum<<endl;
		}
		
	}
