	#include<bits/stdc++.h>
	using namespace std;
	
	#define ll long long 
	const int maxi =2010;
	int main()
	{
		 ll dist[20][20] ={{0}};
		 ll dp[maxi][20] = {0};
		 ll n,m;
		 cin>>n>>m;
		 for(ll i =0;i<n;i++)
		 {
		 	for(ll j=0;j<n;j++)
		 	{
		 	  dist[i][j] = INT_MAX;	
			}
		 }
		 for(ll i=0;i<m;i++)
		 {
		 	 ll a,b,c;
		 	 cin>>a>>b>>c;
		 	 a--;
		 	 b--; 
		 	 dist[a][b] = dist[b][a] = min(dist[a][b],c);
		 }
		 for(ll i=0 ;i<(1<<n);i++)
		 {
			 	if(__builtin_popcount(i) ==1) continue;
				 	
				 	for(int j=0;j<n;j++)
				 	{
					 	      dp[i][j] = INT_MAX;
							  for(int k=0;k<n;k++)
							  {
							  	 if(i &(1<<j) && (i&(1<<k)) && j!=k)
							  	 {
							  	   dp[i][j] = min(dp[i][j],dp[i^(1<<j)][k]+dist[k][j]);	
								 }
						      }	
					}
		 }
		 
		 ll ans = INT_MAX;
		 for(int i=0;i<n;i++) ans = min(ans,dp[(1<<n)-1][i]);
		 cout<<ans<<endl;
	}
