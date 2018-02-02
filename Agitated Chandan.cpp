#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > G[100005];
int dist[100005];
bool visited[100005];


int bfs(int fir,int sec)
{
    memset(dist,0,sizeof(dist));
    memset(visited,false,sizeof(visited));
    
	queue<int> pq;
	pq.push(fir);
	
	dist [fir] = 0;
	visited [fir] = true;
	
	
	while(pq.empty() == false)
	{
		int top = pq.front();
		pq.pop();
		
	    for(int i=0 ; i<G[top].size() ; i++)
	    {
	    	if( !visited[G[top][i].first])
	    	{
	    		visited[G[top][i].first] = true;
	    	     pq.push(G[top][i].first);
	    	    dist[G[top][i].first] = dist[top] + G[top][i].second;
			}
		}
	}
	int index = max_element(dist+1,dist+sec+1 ) -dist;
	return index;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
		int edges;
		cin>>edges;
		
		for(int i=1;i<=edges;i++)
		{
			G[i].clear();
		}
		for(int i=1;i<edges;i++)
		{
		  int u,v,weight;
		  cin>>u>>v>>weight;
		  G[u].push_back(make_pair(v,weight));
		  G[v].push_back(make_pair(u,weight));
		}
		int distravelled = bfs(1,edges);
		int chandantravelled = bfs(distravelled,edges);
		int ans = dist[chandantravelled];
		int cost;
		if(ans<=100)
		{
			cost =0;
		}
		else if(ans >100 && ans<=1000)
		{
			cost =100;
		}
		else if(ans >1000 && ans <=10000)
		{
			cost = 1000;
		}
		else 
		{
			cost =10000;
		}
		cout<<cost<<" "<<ans<<endl;
	}
}
