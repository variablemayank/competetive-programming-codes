#include<bits/stdc++.h>
using namespace std;

typedef long long  ll;
ll u[123456];
ll v[123456];
ll w[123456];
ll w1[123456];
ll dist[1234];
 #define FORR(x,arr) for(auto& x:arr)
vector< pair<ll,ll> > vec[123456];

main()
{
   ll i,j,k,ver,edg,src,des,maxw;
   cin>>ver>>edg>>maxw>>src>>des;
   for(ll i=0;i<edg;i++)
   {
   	 cin>>u[i]>>v[i]>>w[i];
   	 w1[i] = w[i];
   	 if(w[i]==0) w[i]=1;
   	 vec[u[i]].push_back(make_pair(v[i],i));
   	 vec[v[i]].push_back(make_pair(u[i],i));
   }
   
   check:
   	for(ll i=0;i<ver;i++) dist[i] = INT_MAX;
	dist[src]=0;
    priority_queue<pair<ll,ll> > pq;
	pq.push(make_pair(0,src));
	
	while(!pq.empty())
	{
		ll x = -pq.top().first;
		ll y=  pq.top().second;
		pq.pop();
		if(dist[y]!=x);
		FORR(e,vec[y])
		{
			if(w[e.second] +x < dist[e.first])
			{
				dist[e.first] =  x +w[e.second];
				pq.push(make_pair(-dist[e.first],e.first));
			}
			
		}
	}
	if(dist[des]>maxw) return cout<<"NO",0;
	if(dist[des]<maxw) 
	{
		for(i= 0; i<edg;i++)
		{
			if(w1[i]==0)
			{
				w[i] += maxw- dist[des];
				w1[i] =1;
				goto check;
			}
		
		}
			if(i>=edg) return cout<<"NO",0;
	}
	cout<<"YES\n";
	for(ll i=0;i<edg;i++) 
	cout<<u[i]<<" "<<v[i]<<" "<<w[i]<<endl;
	 
}
