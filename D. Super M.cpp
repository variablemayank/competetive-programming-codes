	#include<bits/stdc++.h>
	using namespace std;
	
	int depth[1234567];
	int size[1234567];
	bool attacked[1234567];
	vector<int> adj[1234567];
	
	void dfs(int u,int par)
	{
		if(attacked[u]) size[u]=1;
		else size[u] =0;
		
		for(int i=0;i<adj[u].size();i++)
		{
			int v = adj[u][i];
			if(v!=par)
			{
				depth[v] = depth[u]+1;
				dfs(v,u);
				size[u] += size[v];
			}
		}
	}
	
	int main()
	{
		ios_base::sync_with_stdio(false);
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n-1;i++)
		{
			int u,v;
			cin>>u>>v;
		    adj[u].push_back(v);
			adj[v].push_back(u);	
	    }   
	    
	    // to find the diameter of the tree first traverse to the longest path
	    // to the s to x lets say then from x traverse x to farthest node lets sayy 
	    // so the dist(x,y) is the diameter of the tree
	    int src =0;
	    for(int i=1;i<=m;i++)
	    {
	    	int u;
	    	cin>>u;
	    	attacked[u] = true;
	    	src = u;
		}
		dfs(src,-1);
		
		for(int i=1;i<=n;i++)
		{
			if(depth[i]>depth[src] && attacked[i])
			{
				src = i;
			}
		}
		memset(depth,0,sizeof(depth));
		dfs(src,-1);
		
		int ans =0;
		int res =0;
	    for(int i=1;i<=n;i++)
	    {
	    	if(size[i]>0 && m-size[i]>0)
	    	{
	    		ans+=2;
			}
			if(attacked[i] && depth[i]>res)
			{
				res = depth[i];
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(attacked[i] && depth[i]== res && src> i)
			{
				src = i;
			}
		}
		cout<<src<<"\n";
		cout<<ans-res<<"\n";
	}
