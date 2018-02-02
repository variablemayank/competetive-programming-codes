	#include<bits/stdc++.h>
	using namespace std;
	
	const int maxi = 1000006;
	int  papa[maxi];
	
	vector<pair<long long ,pair<long ,long > > >vec;
	void init()
	{
		for(int i=0;i<=1000006;i++)
		papa[i] =i;
	}
	int act(int x)
	{
		if(x == papa[x]) return x;
		return papa[x] = act(papa[x]);
	}
	void union1(int x,int y)
	{
		if(rand()) swap(x,y);
		papa[x] = y;
	}
	int main()
	{
	    init();
		long long  nodes,edges,w;
		cin>>nodes>>edges>>w;
		for(int i=0;i<edges;i++)
		{
			int a,b,weigh;
			cin>>a>>b>>weigh;
			vec.push_back(make_pair(weigh,make_pair(a,b)));
			
		}
		sort(vec.begin(),vec.end());
	    int ans = nodes -1 ; // in a spanning tree means a graph which no circuits
	    
	    if(w <nodes-1) ans = 1e9;
	 
	    for(int i=0;i<vec.size();i++)
	    {
	    	int a,b,c;
	    	a = vec[i].second.first;
	    	b=  vec[i].second.second;
	    	c=  vec[i].first;
	    	a=  act(a);
	    	b=  act(b);
	    	if(a==b)
	    	{
	    		continue;
			}
			union1(a,b);
		    -- nodes;
		    w -= c;
		    if(nodes <= w) ans = nodes -1;
			
		}
		if(nodes >1 || ans >1e7) ans =-1;
		cout<<ans<<endl;
		return 0;
		
	}
