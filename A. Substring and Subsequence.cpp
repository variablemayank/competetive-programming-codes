#include<bits/stdc++.h>
using namespace std;

const int mod =1000000007;
int dp[5010][5010];
int main()
{
	string s,t;
	cin>>s;
	cin>>t;
	
	for(int i=s.size()-1;i>=0;i--)
	{
		for(int j=t.size()-1;j>=0;j--)
		{
			dp[i][j]  = dp[i][j+1];
			if(s[i]==t[j])
			{
				dp[i][j] =(dp[i][j]+ dp[i+1][j+1]+1)%mod;
			}
		}
	}
    long long  ans =0;
	for(int i=0;i<s.size();i++)
	{
	   ans = (ans+dp[i][0])%mod;
	}
	cout<<ans<<endl;
	return 0 ;
}
