	#include<bits/stdc++.h>
	using namespace std;
	
	const int inf = 1000000000;
	vector<int> graph[3003];
	int dist[3003][3003];
    int n,m;
    
    void bfs(int src)
    {
       for(int i=1;i<=n;i++) dist[src][i] = inf;
       queue<int> pq;
       pq.push(src);
       dist[src][src] = 0;
       
       while(!pq.empty())
       {
       	  int u = pq.front();
       	  pq.pop();
       	  for(int j=0;j<graph[u].size();j++)
       	  {
       	     int v = graph[u][j];
			 if(dist[src][v] > dist[src][u]+1)
			 {
			   dist[src][v] = dist[src][u] +1;
			   pq.push(v);
			 }	
		  }
	   }
	}
	int main()
	{
		 scanf("%d%d",&n,&m);
		 for(int i=0;i<m;i++)
	     {
	     	int u,v;
	     	scanf("%d%d",&u,&v);
	     	graph[u].push_back(v);
	     	graph[v].push_back(u);
		 }
		 
		 for(int i=1;i<=n;i++)
		 {
		 	bfs(i);
		 }
		 int s1,s2,t1,t2,l1,l2;
		 cin>>s1>>t1>>l1>>s2>>t2>>l2;
		// cout<<dist[s1][t1];
		
		if(dist[s1][t1]>l1 or dist[s2][t2] >l2) return cout<<"-1",0;
		int ans = dist[s1][t1] + dist[s2][t2];
		//cout<<ans;
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
			   int var = min(dist[s1][i] +dist[j][t1], dist[s1][j] +dist[i][t1]);
			   int var1 = min(dist[s2][i] +dist[j][t2],dist[s2][j]+dist[j][t2]);
			   if(var+dist[i][j] <=l1 && var1+ dist[i][j] <=l2)
			   {
			   	 ans = min(ans,var+var1+dist[i][j]);
			   }
			}
		}
	//	cout<<ans<<endl;
	cout<<m-ans<<endl;
	}
