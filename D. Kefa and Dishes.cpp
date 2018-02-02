    #include<bits/stdc++.h>
	using namespace std;
	
    #define ll long long 
    
    ll bonus[20][20];
    ll dp[(1<<20)][20];
    vector<ll> cap;
    int n,m;
    
    ll solve(int mask ,int last)
    {
    	if(__builtin_popcount(mask)>=m) return 0;
    	else if(dp[mask][last] !=-1) return dp[mask][last];
    	ll ret = 0;
    	for(int i=0;i<n; i++)
    	{
    	   if(mask &(1<<i)) continue;
    	   ll soln = cap[i] + bonus[last][i] + solve(mask|(1<<i),i);
    	   ret = max(ret,soln);
		}
		return (dp[mask][last] = ret);
	}
	
	int main()
	{
		ios_base::sync_with_stdio(false);
		for(int i=0;i<(1<<20);i++) for(int j=0;j<20;j++) dp[i][j] = -1;
		for(int i=0;i<20;i++) for(int j=0;j<20;j++) bonus[i][j] = 0;
		int k;
		cin>>n>>m>>k;
		cap.resize(n);
		for(int i=0;i<n;i++) cin>>cap[i];
		for(int i=0;i<k;i++)
		{
			int a,b,c;
			cin>>a>>b>>c;
			a-=1;
			b-=1;
		    bonus[a][b] = c;
		    
		}
		ll ans = 0;
		for(int i=0;i<n;i++)
		ans = max(ans,cap[i]+solve((1<<i),i));
		
		cout<<ans<<endl;
		
		
	}
