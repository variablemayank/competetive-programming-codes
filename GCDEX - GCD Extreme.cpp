	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (int i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	#define sz(c)     (int)c.size()
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
     
	const int mod = 1000005;
	const int maxi =100001; 
   
    int factorcount[3003];
    bool prime[3003];
    void seive()
    {
    	memset(prime,true,sizeof(prime));
       for(int i=2;i<=3003;i++)
       {
       	  if(prime[i])
       	  {
       	    for(int j=i*2;j<=3003;j+=i)	
       	    prime[j] = false;
		  }
	   }
	   for(int i=2;i<=100;i++) 
	   if(prime[i]) cout<<i<<" ";
	}
    void generate()
    {
    	for(int i=1;i<=3003;i++)
    	{
    	    factorcount[i] = 0;
		}
		
		for(int i=2;i<=3003;i++)
		{
			if(prime[i] && factorcount[i] ==0)
			{
				for(int j=i;j<=3003;j+=i)
				{
					factorcount[j]++;
				}
			}
		}
	}
    
    const int N=1000001;
    int phi[N];
    ll res[N],cum[N];
	void solve()
	{
	    for(int i=1;i<N;i++) phi[i]=i;
	    for(int i=2;i<N;i++){
	        if(phi[i]==i){
	            for(int j=i;j<N;j+=i){
	                phi[j]/=i;
	                phi[j]*=i-1;
	            }
	        }
	    }
	    for(int i=1;i<N;i++){
	        for(int j=i;j<N;j+=i){
	            res[j]=res[j]+1LL*i*phi[j/i];
	        }
	    }
	    for(int i=1;i<N;i++) res[i]-=i;
	    cum[0]=0;
	    for(int i=1;i<N;i++){
	        cum[i]=cum[i-1]+res[i];
	    }
	}
	int main()
	{
		jadu;
		solve();
		int N;
		while(cin>>N && N!=0)
		{
		 cout<<cum[N]<<endl;
		}
	} 

