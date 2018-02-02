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

       
 
    #define MAXN   10000101
    #define kaiseho long long unsigned
   
    long long int  pyar[MAXN]={0};
    long long int senorita[MAXN]={0};
	int main()
	{
		//jadu;
		kaiseho n,var;
		cin>>n;
		
	      for(int i=1;i<=n;i++) 
		  {
		  cin>>var;
		  senorita[var]++;
	      }
	      
	      for(int i=2;i<=10000000;i++)
	      {
	      	
	      	if(pyar[i]>=0) 
			{
			pyar[i] = senorita[i];
	      	
	      	for(int j=i*2;j<=10000000;j+=i)
	        {
	        	pyar[j] = -1;
	        	pyar[i] = pyar[i] +senorita[j];
			}
		    }
		  }
		  
		  for(int i=2;i<=10000000;i++)
		  {
		  	if(pyar[i] <0)
		  	{
		  	  pyar[i] = pyar[i-1];	
			}
			else
			pyar[i] += pyar[i-1];
		  }
	      kaiseho t,l,r;
	      cin>>t;
	      while(t--)
	      {
	      	cin>>l>>r;  
				if(r>10000000)
				{
				    r=10000000;
				}
			
				if(l>r)
				{
				    cout<<0<<"\n";
				}
				else
				{
				    cout<<pyar[r]-pyar[l-1]<<"\n";
				} 
			}
		}
