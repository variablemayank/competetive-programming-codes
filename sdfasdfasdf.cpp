#include<bits/stdc++.h>
using namespace std;

const int mod =1e9+7;
int dp[5001][5001];
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
				dp[i][j] += (dp[i+1][j+1]+1)%mod;
			}
		}
	}
	int ans =0;
	for(int i=0;i<s.size();i++)
	{
	   ans += = arr[i][0];
	}
	cout<<ans<<endl;
	return 0 ;
}
