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

	int main()
	{
		jadu;
		seive();
		generate();
		int n;
		cin>>n;
		int count =0;
		for(int i=2;i<=n;i++)
		{
			if(factorcount[i] ==2) count++;
		}
		cout<<count<<endl;
	} 

