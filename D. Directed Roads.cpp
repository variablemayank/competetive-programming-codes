	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define ll long long 
	const int MOD = 1e9+7;
	ll m;
	int arr[234567];
	int white =0;
	int grey =1;
	int black =2;
    int visited[234567];
    int dist[234567];
    ll ans =1;
    ll dp[1234567];
    ll fast_exp(int base, int exp)
	{
    ll res=1;
    while(exp>0) 
	{
       if(exp%2==1) res=(res*base);
       base=(base*base);
       exp/=2;
    }
    return res%MOD;
    }
    
    void process(int n){
	dp[0]=1;
	for(int i=1;i<=n+5;i++)
	dp[i]=(dp[i-1]*2)%MOD;
     }
     
    void dfs(int u,int k)
    {
    	visited[u] =grey;
    	int v= arr[u];
    	dist[u] =k;
        if(visited[v]==grey)
        {
        	int len = dist[u] -dist[v] +1;
        	ans = (ans*(fast_exp(2,len) -2))%MOD;
        	m = m-len;
		}
		if(visited[v] == white) dfs(v,k+1);
		visited[u] =black;
    	
	}
	int main()
	{
		jadu;
		ll n;
		cin>>n;
		process(n);
	    m = n;
		for(int i=1;i<=n;i++) cin>>arr[i];
		memset(visited,white,sizeof(visited));
		
		for(int i=1;i<=n;i++)
		{
		   if(visited[i] == white)
	
		   {
		   	dfs(i,0);
		   }
		}
	//	ans %= MOD;
		
		ans = (ans*(fast_exp(2,m)))%MOD;
		cout<<ans;
	}
