#include"bits/stdc++.h"
using namespace std;

int dp[110][40];
int main()
{
	int n,k,d;
	cin>>n>>k>>d;
	dp[0][0] =1;
	dp[0][1] =0;
	for(int i=1 ;i<=n;i++)
	{
		dp[i][0] = dp[i][1] =0;
		for(int j= 1;j<=k;j++)
		{
			if(i-j<0) break;
			
			if(j<d)
			{
				dp[i][0] = (dp[i][0] +dp[i-j][0])%1000000007;
				dp[i][1] = (dp[i][1]+dp[i-j][1])%1000000007; 
			}
	        else
	        {
	        	dp[i][1] = (dp[i][1]+dp[i-j][0])%1000000007;
	        	dp[i][1] = (dp[i][1]+ dp[i-j][1])%1000000007;
			}
		}
	}
	cout<<dp[n][1]<<endl;
	//for(int i=0;i<=n;i++)
    //{
    //	for(int j=0;j<=k;j++)
    //	{
    //		cout<<dp[i][j]<<" ";
	//	}
	//	cout<<endl;
	//}
}
