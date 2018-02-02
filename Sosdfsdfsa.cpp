	#include<bits/stdc++.h>
	using namespace std;
	const long long int mod=1e9+7;
	int main()
	{
		  int tc;
		  scanf("%d",&tc);
		  while(tc--)
	      {
	      	     long long int N,P,ans=0,dp[10000][10];
	      	     scanf("%lld %lld",&N,&P);
	             N--;
	      	     dp[1][0]=1;
	      	     dp[1][1]=1;
	      	     for(int A=2;A<=N;A++)
	      	     {
	      	           for(int B=0;B<P;B++)
					   {
					        if(B>=A) break;
					        dp[A][B]=dp[A-1][B];	
							dp[A][0]=((dp[A][0]%mod)+(dp[A-1][B]%mod))%mod;
					   }	
				 }
				 for(int C=0;C<P;C++)
				 ans=(ans%mod+(dp[N][C])%mod)%mod;
				 printf("%lld\n",ans);
		  }
	}
		  
