	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (ll i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define INF 1000000000
	#define PB push_back
	#define MP make_pair
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    const int mod = 1000000007;
	const int maxi =1024;

	//int arr[maxi];
//	int brr[maxi];
//	int crr[maxi];
//	int n,m,k;
	int dp[maxi][22][80];
	int oxig[maxi];
	int nitro[maxi];
	int w[maxi];
	
	int solve(int i,int no_o,int no_n )
	{
		if(dp[i][no_o][no_n]!=-1) return dp[i][no_o][no_n];
		if(no_o==0 && no_n==0)
		{
			dp[i][no_o][no_n] =0;
		}
		else if(i==0)
		{
			dp[i][no_o][no_n] = INF;
		}
		else
		{
			dp[i][no_o][no_n] = min(solve(i-1,no_o,no_n),solve(i-1,max(no_o -oxig[i-1],0),max(no_n-nitro[i-1],0))+w[i-1]);
		}
		return dp[i][no_o][no_n];
	}
	int main()
	{
		jadu;
		int t;
		cin>>t;
		while(t--)
		{
			int O,N,n;
			cin>>O>>N>>n;
			for(int i=0;i<=n;i++)
			{
				for(int j=0;j<=O+1;j++)
				{
					for(int k=0;k<=N+1;k++)
					{
						dp[i][j][k] = -1;
					}
				}
			}
			for(int i=0;i<n;i++)
			{
				cin>>oxig[i]>>nitro[i]>>w[i];
			}
			cout<<solve(n,O,N)<<endl;
		}
	}
