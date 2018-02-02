#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf (1LL<<61)
typedef pair <ll,ll > pr;
 
vector <pr> adj[100005];
ll visited[100005];
int cost;
void dfs(int u){//source
  //memset(visited,0,sizeof(visited));
  if(visited[u]==true)
  return;
  visited[u]=true;
 
  for(int i=0;i<adj[u].size();i++){
  	cost+=adj[u][i].second;
  	ll  v=adj[u][i].first;// neighbor of u is 
  	if(visited[v]==false){
   // cout<<" neeighbor of u that is v is = "<<v<<endl
    dfs(v);

  }
}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	cost=0;
	ll n,m;
	scanf("%lld%lld",&n,&m);
	memset(visited,0,sizeof(visited));
	for(ll i =1;i<=m;i++){
		ll u,v,w;
		scanf("%lld%lld",&u,&v);
		adj[u].push_back(make_pair(v,w));
		//adj[v].push_back(make_pair(u,w));// reverse edge with weight 1
	}
	for(int i=1;i<=n;i++){
		if(visited[i]==false){
			dfs(i);
		}
		
	}
   cout<<cost<<endl;
}
}
