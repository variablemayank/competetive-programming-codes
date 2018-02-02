	 #include<bits/stdc++.h>
	 using namespace std;
	 
	 typedef long long ll;
	 #define jadu ios_base::sync_with_stdio(false),cin.tie(0);
	 const ll inf = 1e9;
	 ll dist[103][1000];
	 ll n;
	 
	 void flloyd()
	 {
	    for(int v =1;v<=n;v++)
	    {
	    	for(int i=1;i<=n;i++)
	    	{
	    		for(int j=1;j<=n;j++)
	    		{
	    			if(dist[i][v] +dist[v][j] <dist[i][j])
	    			{
	    				dist[i][j] = dist[i][v] +dist[v][j];
					}
				}
			}
		}
	 }
	 ll minDistance(ll dist[], bool sptSet[])
	{
	   // Initialize min value
	  ll min = INT_MAX, min_index;
	  
	   for (int v = 1; v <= n; v++)
	     if (sptSet[v] == false && dist[v] <= min)
	         min = dist[v], min_index = v;
	  
	   return min_index;
	}
	  
	  
	void dijkstra(ll  src)
	{
	     ll  ans[n+1];     // The output array.  dist[i] will hold the shortest
	                      // distance from src to i
	  
	     bool sptSet[n+1]; // sptSet[i] will true if vertex i is included in shortest
	                     // path tree or shortest distance from src to i is finalized
	  
	     // Initialize all distances as INFINITE and stpSet[] as false
	     for (int i = 0; i <= n; i++)
	        ans[i] = INT_MAX, sptSet[i] = false;
	  
	     // Distance of source vertex from itself is always 0
	     ans[src] = 0;
	  
	     // Find shortest path for all vertices
	     for (int count = 0; count < n-1; count++)
	     {
	       // Pick the minimum distance vertex from the set of vertices not
	       // yet processed. u is always equal to src in first iteration.
	       int u = minDistance(ans, sptSet);
	  
	       // Mark the picked vertex as processed
	       sptSet[u] = true;
	  
	       // Update dist value of the adjacent vertices of the picked vertex.
	       for (int v=1; v<=n; v++)
	  
	         // Update dist[v] only if is not in sptSet, there is an edge from 
	         // u to v, and total weight of path from src to  v through u is 
	         // smaller than current value of dist[v]
	         if (!sptSet[v] && dist[u][v] && ans[u] != INT_MAX 
	                                       && ans[u]+ dist[u][v] < ans[v])
	            ans[v] = ans[u] + dist[u][v];
	     }
	     
	     for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
	    
	}
	  
	 int main()
	 {
	 	jadu;
	 	  int t;
	 	  cin>>t;
	 	  while(t--)
	 	  {
	 	  	 
	         ll k,x,m,s;
		     cin>>n>>k>>x>>m>>s;
		    for(int i=1;i<=1000;i++)
		    {
		    	for(int j=1;j<=1000;j++)
		    	{
		    		dist[i][j] = 0;
				}
			}
		    for(int i=1;i<=k;i++)
		    {
	           for(int j=i+1;j<=k;j++)
	           {
	           //	cout<<i<<" "<<j<<endl;
	           	 dist[i][j] = x;
	           	 dist[j][i] =x;
			   }
		    }
		 
			for(int i=0;i<m;i++)
			{
			   ll u,v,w;
			   cin>>u>>v>>w;
			   dist[u][v] = w;
			   dist[v][u] = w;	
			} 	
		   //    for(int i=1;i<=n;i++)
		    //{
		    	
		    //	for(int j=1;j<=n;j++)
		    //	{
		    //		cout<<dist[i][j]<<" ";
			//	}
			//	cout<<endl;
			//}
		//	flloyd();
			dijkstra(s);
			cout<<endl;
	    }
    }
	 
