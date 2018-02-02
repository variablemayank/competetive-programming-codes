	
	#include<bits/stdc++.h>
	using namespace std;
	
	#define INF 1000000000000000LL
	long long int  dist[105][105];
	int papa[101];
		int cities,edges,k;
	struct node
	{
		int  src;
		int  dest;
		long long int wiegh;
	};
	void init()
	{
		for(int i=0;i<=100;i++)
		papa[i] = i;
	}
	int get(int x)
	{
		if(x == papa[x]) return x;
		return papa[x] = get(papa[x]);
	}
	void merge(int x,int y)
	{
		if(rand()) swap(x,y);
		papa[x] =y;
	}
	void floydwarshall(vector<node> g,int n)
	{
		for(int i=0;i<g.size();i++)
		{
			dist[g[i].src][g[i].dest] = g[i].wiegh;
			dist[g[i].dest][g[i].src] = g[i].wiegh;
			
		}
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(dist[i][k]+ dist[k][j]< dist[i][j])
					dist[i][j] = dist[i][k]+ dist[k][j];
				}
			
			}
		}
	}
	bool compare(node n1,node n2)
	{
		return n1.wiegh<n2.wiegh;
	}
	long long int  kruskal(vector<node> g,int k )
	{
		
		vector<node> mst;
		int cnt =0;
		int cnt1=0;
		long long int ans =0;
		sort(g.begin(),g.end(),compare);
		while(cnt1!=k)
		{
			node ns = g[cnt1++];
			int x = get(x);
			int y = get(y);
			if(x!=y)
			{
				ans += ns.wiegh;
				mst.push_back(ns);
				merge(x,y);
				cnt++;
			}
		}
		return ans;
	}
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
		
		
			cin>>cities>>edges>>k;
				vector<node> graph;
			node nd;
			for(int i=0;i<edges;i++)
			{
				int u,v,w;
				cin>>nd.src>>nd.dest>>nd.wiegh;
				nd.src--;
				nd.dest--;
				graph.push_back(nd);
			}
			for(int i=0;i<cities;++i)
    			for(int j=0;j<cities;++j)
    				dist[i][j]=INF;
    					for(int i=0;i< cities;++i)
    			dist[i][i]=0;
			floydwarshall(graph,cities);
			graph.clear();
		    	init();
		        node ns;
				for(int i=0;i<k;i++)
		      	{
					for(int j= i+1;j<k;j++)
			    	{
						ns.src = i;
				    	ns.dest = j;
						//ns.wiegh = dist[i][j];
						//graph.push_back(nd);
					}
				}
			int ans = kruskal(graph,k);
				cout<<ans<<endl;
				
			
		}
	}
