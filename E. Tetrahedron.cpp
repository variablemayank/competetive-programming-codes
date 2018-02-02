#include<bits/stdc++.h>
using namespace std;

int dp[10000001][4];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	memset(dp,0,sizeof(dp));
	dp[0][0] =1; // first st
	for(int i=1;i<=n;i++)
	{
		long long  int  ans = 1LL *dp[i-1][0]+ dp[i-1][1] + dp[i-1][2] +dp[i-1][3];
	//	cout<<ans<<endl;
		for(int j=0;j<4;j++)
		{
			dp[i][j] = (1LL*ans- dp[i-1][j])%1000000007;
		}
	}
	cout<<dp[n][0]<<endl;
	return 0;
}
