#include<bits/stdc++.h>
using namespace std;

vector<int> graph[200005];
int counti =0;
bool visited[200005];
int depth[200005];
void dfs(int u)
{
	depth[u] =1;
    for(int i=0;i<graph[u].size();i++)
    {
    	if(!visited[graph[u][i]])
    	{
    		counti++;
    		depth[graph[u][i]] = depth[u] +1;
    		visited[graph[u][i]] = true;
    	}
	}
}
int main()
{
	int n,x;
	cin>>n>>x;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	dfs(1);
	cout<<depth[3]*2;
	
}
