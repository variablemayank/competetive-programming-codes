	#include<bits/stdc++.h>
	using namespace std;
	
	const int maxi =100005;
	int prime[maxi];
	int dp[5][maxi];
	void seive()
	{
		 for(int i=2;i<maxi;i++)
		 {
		 	if(prime[i]==0)
		 	{
		 	 
			  prime[i] =1;
			  	
			 	 for(int j= i*2;j<maxi; j+=i)
			 	 {
			 	 	prime[j]++;
			     }
		    }
		 }
	}
	void solve()
	{
		
		   for(int i =2;i<maxi;i++)
		   {
		      
			  for(int j=0;j<5;j++)
			  dp[j][i] = dp[j][i-1];
			  if(prime[i]<=5)
			  {
			     dp[prime[i]-1][i]++;	
		      }
		   }
	}
	int main()
	{
		seive();
	    solve();
	    int t;
	    cin>>t;
	    while(t--)
	    {
	    	int a,b,k;
	    	
	    	cin>>a>>b>>k;
	    	cout<<dp[k-1][b] - dp[k-1][a-1]<<endl;
		}
	}
