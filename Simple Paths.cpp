	#include<bits/stdc++.h>
	using namespace std;
	
	int parent[1000000];
	vector<pair<int,int > >graph[1000000];
	
	
    int get(int x)
    {
    	if(parent[x] == x) return x;
    	return (parent[x] = get(parent[x]));
	}
	
	void merge(int x,int y)
	{
		x = get(x);
		y= get(y);
		parent[x] =y;
	}
	
	int main()
	{
		int n,m,c;
		cin>>n>>m>>c;
		for(int i=1;i<=m;i++)
		{
			int u,v,c;
			cin>>u>>v>>c;
			graph[c].push_back({u,v});
		}
		int query;
		cin>>query;
	    pair<int ,int> q[query+1];
	    int ans[query+1]={0};
	    for(int i=1;i<=query;i++)
	    {
	    	int u,v;
	    	cin>>u>>v;
	    	q[i].first  = u;
	    	q[i].second = v;
		}
	    
		for(int i=1;i<=c;i++)
		{
			for(int j=1;j<=n;j++) parent[j] = j;
			
			for(int cc =1;cc<=c;cc++)
			{
			   if(cc !=i)
			   {
			   	for(auto col :graph[cc])
			   	 merge(col.first,col.second);
			   }
			}
			
			for(int k =1;k<=query;k++)
			{
				if(get(q[k].first)!= get(q[k].second))
				{
					ans[k]++;
				}
			}
			
		}
		for(int i=1;i<=n;i++) parent[i] = i;
		for(int i=1;i<=c;i++)
		{
			for(auto cc:graph[i])
			{
				merge(cc.first,cc.second);
			}
		}
		for(int i=1;i<=query;i++)
		{
			if(get(q[i].first)!=get(q[i].second))
			{
				ans[i] = 0;
			}
		}
		for(int i=1;i<=query;i++)
		{
			cout<<ans[i]<<endl;
		}
	}
