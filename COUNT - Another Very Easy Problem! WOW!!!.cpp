#include<bits/stdc++.h>
using namespace std;

const int mod =1988;
int main()
{
	 
	int n,k;

	int dp[5005][5005];
	
	for(int i=0;i<=5001;i++)
	{
	  dp[i][1] = 1;
	  dp[0][i] =1;
	}
	
	for(int k=2;k<=5001;k++)
	{
		for(int n=1;n<=5001;++n)
		{
			dp[n][k] =  (((n-k)>=0?dp[n-k][k]:0) + dp[n][k-1])%mod; 
		}
	}
	
	while(true)
	
	{
	    cin>>n>>k;
	    
	
	if(!n&& !k) break;
	cout<<dp[n-k][k]<<endl;
	}
	//cout<<dp[n][k];
}

