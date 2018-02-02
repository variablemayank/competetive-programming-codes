	
	
	#include<bits/stdc++.h>
	using namespace std;
	#define jadu ios_base::sync_with_stdio(false),cin.tie(0);
	int n,m;
	int papa[1005];
	int cost[1005][1005];
	struct node{
		int src;
		int des;
		int wght;
	};
	vector<node> graph;
	vector<node> mst;
	void init()
	{
		for(int i=0;i<1005;i++) papa[i] =i;
	}
	int get(int x)
	{
		if(x== papa[x]) return x;
		return papa[x] = get(papa[x]);
	}
    void merge(int x, int y)
    {
        x = get(x);
        y = get(y);
        papa[x] = papa[y];
    }
	bool compare( node n1,node n2)
	{
	  return n1.wght<n2.wght;
	}
	int kruskal()
	{
	
		int minimumCost = 0;
		int x,y,w;
		node ns;
		for(int i=0;i<graph.size();i++)
		{
	            x = graph[i].src;
	            y = graph[i].des;
	            w = graph[i].wght;
	            
	           if(get(x)!=get(y))
	           {
	           	 minimumCost+= w;
	           	 merge(x,y);
	           	 ns.des = x;
	           	 ns.src  =y;
	           	 ns.wght = w;
	           	 mst.push_back(ns);
			   }
		}
		return minimumCost;
	}
	int main()
	{
	    jadu;
		int t;
		cin>>t;
		while(t--)
		{
			graph.clear();
			//int n,m;
			cin>>n>>m;
			node ns; 
			for(int i=0;i<m;i++)
			{
				cin>>ns.src>>ns.des>>ns.wght;
				graph.push_back(ns);
				cost[ns.src][ns.des] = cost[ns.des][ns.src] = ns.wght;
			}
			sort(graph.begin(),graph.end(),compare);
			init();
			int ans = kruskal();
			int q;
			cin>>q;
			int count =0;
			for(int i=1;i<=q;i++)
			{
				init();
				int a,b;
				cin>>a>>b;
			    int cs = cost[a][b];
			    merge(a,b);
			    if(kruskal()+cs == ans) ++count;
			}
			int gcd = __gcd(count,q);
			cout<<count/gcd<<"/"<<q/gcd<<endl;
		//	cout<<count<<endl;
		}
		return 0;
		//bye bye
	}
