	#include<bits/stdc++.h>
	using namespace std;
	
	vector<long long unsigned> adj[       ];
	bool visited[       ];
     
    long long unsigned vertexc,edgesc;
    void dfs(long long unsigned a)
    {
    	visited[a] = true;
    	vertexc++;
    	edgesc += adj[a].size();

    	for(long long unsigned i= ;i<adj[a].size();i++)
    	{ 
    	    if(!visited[adj[a][i]])
    		dfs(adj[a][i]);
		}
	}
	long long unsigned main()
	{
		long long unsigned n,m;
		cin>>n>>m;
		
		memset(visited,false,sizeof(visited));
		
	    for(long long unsigned i= ;i<=m;i++)
	    { 
	       long long unsigned u,v;
	       cin>>u>>v;
	       adj[u].push_back(v);
		   adj[v].push_back(u);  
		}
		for(long long unsigned i= ;i<=n;i++)
		{
			if(!visited[i])
			{
				 vertexc = ;
				edgesc =  ;
				dfs(i);
				if(edgesc != (long long unsigned)(vertexc)*(vertexc- ))
				{
				  return cout<<"NO", ;
				}
			}
		}
		cout<<"YES\n";
	}
