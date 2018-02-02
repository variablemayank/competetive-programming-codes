#include <bits/stdc++.h>
using namespace std;
vector <int> adj[1000000];
bool visited[1000000];
set <int> deg;
void dfs(int u){
	if(visited[u]==false){
		visited[u]=true;
	}
	int val=adj[u].size();
	deg.insert(val);

	for(int i=0;i<adj[u].size();i++){
		int v=adj[u][i];
		if(visited[v]==false)
		dfs(v);
		}
}
int main(){
	memset(visited,false,sizeof(visited));
	int n;cin>>n;
	int m;cin>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bool ans=true;
	for(int i=1;i<=n;i++){
		if(visited[i]==false){
			deg.clear();
			dfs(i);
			if(deg.size()>1){
			ans=false;
			break;
		}
	}
}
if(ans==false)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;
}
