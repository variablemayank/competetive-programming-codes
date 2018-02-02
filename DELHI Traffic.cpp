#include<bits/stdc++.h>
using namespace std;


#define inf  (1LL<<61)
int src,des;
int samay[500];
int dist[500];
vector<pair<int ,int > > vec[500];

void dijkstra(int s)
{
   //	cout<<"source vertex is "<<s<<endl;
	
	priority_queue< pair<int ,int > > pq;
    fill(dist,dist+499,INT_MAX);
    //for(int i=0;i<500;i++) dist[i] = INT_MAX;
    dist[s] =0;
    pq.push(make_pair(0,s));
    
    while(!pq.empty())
    {
    	int  weigh = -pq.top().first;
    	//cout<<"w1 is = "<<weigh<<endl;
    	int  u = pq.top().second;
    	//cout<<"vertex is = "<<u<<endl;
    	pq.pop();
    	
		for(int i =0 ;i < vec[u].size();i++)
    	{
    		int v=  vec[u][i].first; // adjacent vertex
    		//cout<<"neghbour of v is "<<v<<endl;
    		int weigh2 = vec[u][i].second;
    		//cout<<"weigh2 is "<<weigh2<<endl;
    		
    		int weight =  weigh +weigh2;
			if( (weight % samay[v])==0 || v == des || samay[v]==0);
    		else
    		weight = ((weight/samay[v])+1)*samay[v];
    		
    		
    	//	cout<<weight<<endl;
    	//	cout<<"dist[v] out "<<dist[v]<<endl;
    	//	cout<<"value of v is = "<<v<<endl;
    		if(weight < dist[v])
    		{
    			dist[v]  =weight;
    		//	cout<<"dist[v] is "<<dist[v]<<endl;
    			pq.push(make_pair(-weight,v));
			}
		}
	}
}
int main()
{

	cin>>src>>des;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
	 int x;
	 cin>>x;
	 samay[i] =x;
	}
	
    for(int i=1;i<=m;i++)
    {
      int u,v,w;
      cin>>u>>v>>w;
      vec[u].push_back(make_pair(v,w));
      vec[v].push_back(make_pair(u,w));
	}
	dijkstra(src);
	int ans = dist[des];
	cout<<ans<<endl;
	return 0;
}
