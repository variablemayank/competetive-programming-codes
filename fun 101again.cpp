#include <bits/stdc++.h>
using namespace std;
vector <int> adj[1000005];
bool visited[1000005];
int c;
bool dfs(int u,int parent){
	visited[u]=true;
	c++;
	for(int i=0;i<adj[u].size();i++){
		int v=adj[u][i];
		if(visited[v]==false){
			dfs(v,u);
		}
		else if(visited[v]==true && v!=parent){
			return true;
		}
	}
}
int main(){
	memset(visited,false,sizeof(visited));
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int ans=0;
	
	for(int i=1;i<=n;i++){
	 c=0;
		if(visited[i]==false)
		{
			dfs(i,-1);
			
			
		}
		if(c%2==0){
			ans+=(c)/2;
		}
		else
		ans+=0;
	}
	cout<<ans<<endl;
}
