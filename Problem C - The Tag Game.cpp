#include<bits/stdc++.h>
using namespace std;

const int maxi = 200005;
vector<int> graph[maxi];
int dist1[maxi];
int dist2[maxi];


void dfs(int node,int parent,int dist[])
{
	dist[node] = dist[parent] +1;
	for(int i=0;i<graph[node].size();i++)
	{
		if(graph[node][i]!=parent)
		{
			dfs(graph[node][i],node,dist);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    int n,x;
    cin>>n>>x;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    dist1[0] = -1;
    dist2[0] = -1;
    dfs(1,0,dist1);
    dfs(x,0,dist2);
     
	int ans =0;   
    for(int i=1;i<=n;i++)
    {
    	if(dist2[i]<dist1[i])
    	{
    		ans = max(ans,dist1[i]*2);
		}
	}
	cout<<ans<<endl;
	return 0;
    
}
