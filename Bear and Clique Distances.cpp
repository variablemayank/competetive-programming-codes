	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (int i = a; i <= b; i++)
	#define F first
	#define S second
	#define inf (1LL<<61)
	#define PB push_back
	#define MP make_pair
	#define sz(c)     (int)c.size()
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<ll,double> pi;
    
    vector<pi> graph[100005];
    double dis[100005];
    
    void dijkstra(ll src)
    {
    	priority_queue<pair<double,ll> > pq;
    	fill(dis,dis+100002,inf);
    	dis[src] =0.0;
    	pq.push({0.0,src});
    	
    	while(!pq.empty())
        {
        	double wgh = -pq.top().first;
        	ll u = pq.top().second;
        	pq.pop();
        	
        	for(int i=0;i<graph[u].size();i++)
        	{
        		ll adj = graph[u][i].first;
        		double wgh2 = graph[u][i].second;
        		double w = wgh+wgh2;
        		
        		if(w < dis[adj])
        		{
        			dis[adj] = w;
        			pq.push({-w,adj});
				}
				
			}
		}
	}
    
	int main()
	{
		jadu;
		int t;
		cin>>t;
		while(t--)
		{
			double x;
			
			ll n,m,k,s;
			cin>>n>>k>>x>>m>>s;
		    
		    for(int i=0;i<=n;i++)
		    graph[i].clear();
		    
		    for(int i=1;i<=k;i++)
		    {
		    	graph[0].push_back(make_pair(i,(double)(x/2.0)));
		    	graph[i].push_back(make_pair(0,(double)(x/2.0)));
		    }
		
			for(int i=1; i<=m;i++)
			{
				ll a,b;
				double c;
				cin>>a>>b>>c;
				graph[a].push_back(make_pair(b,(double)(c)));
				graph[b].push_back(make_pair(a,(double)(c)));
				
			}
			dijkstra(s);
			for(int i=1;i<=n;i++)
			{
				if(i==s)
				{
					cout<<"0 ";
				}
				else
				{
					cout<<(ll)(dis[i]+0.5)<<" ";
				}
			}
			cout<<endl;
		}
		return 0;
	} 
	

