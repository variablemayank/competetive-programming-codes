#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf (1LL<<61)
 
typedef pair <ll,ll > pr;
vector <pr> adj[500];
int  t[500];
ll dist[500];
ll s,d;

void dijkistra(int s){
    //source
    priority_queue <pr> pq;//weight, vertices
    fill(dist,dist+499,inf);
    dist[s]=0;
    pq.push(make_pair(0,s));// dist and vertex
   while(!pq.empty())
   {
     ll  w1=-pq.top().first;
     
     ll u=pq.top().second;
     pq.pop();
   for(ll i=0;i<adj[u].size();i++)
   {
   	
    ll  v=adj[u][i].first;
    ll w2=adj[u][i].second;
    ll   weight=w2+w1;
 
    if(weight %t[v]==0 || v==d || t[v]==0 ) ; 
    else
     weight =(((weight/t[v]))+1)*t[v];
   
       if(weight<dist[v])
	   {
        dist[v]=weight;
       //cout<<"dist[v] inside "<<dist[v]<<endl;
      // cout<<"pushed in priority = "<<v<<endl;
        pq.push(make_pair(-weight,v));
       }
   }
}
}
int main(){
 
  scanf("%lld%lld",&s,&d);
  int n,m;
  scanf("%d%d",&n,&m);
  for(int i=1;i<=n;i++){
  	int  x;
  	scanf("%d",&x);
  	t[i]=x;
  }
  for(int i=1;i<=m;i++){
  	ll u,v,w;
  	scanf("%lld%lld%lld",&u,&v,&w);
  adj[u].push_back(make_pair(v,w));// u is connnected to v with weight w
  	adj[v].push_back(make_pair(u,w));// v -> u and weight is w
  }
dijkistra(s);
ll ans=dist[d];
 
  cout<<ans<<endl;
  
}  
