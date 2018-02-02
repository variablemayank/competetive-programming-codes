	#include<bits/stdc++.h>
	using namespace std;
	
	int  n,m;
	vector<vector<pair<int,int> > > edges(5);
	int papa[100005];
	
	void init()
	{
		for(int i=0;i<=n;i++) papa[i] =i;
	}
	int get(int x)
	{
		if(x==papa[x]) return x;
		return papa[x] = get(papa[x]);
	}
	void merge(int x,int y)
	{
		papa[get(x)]  =  get(y);
	}
	void kruskal()
	{
		// Man 1-3
		init(); 
		int ans =0;
		for(int i=0;i<edges[3].size();i++)
		{
			if(get(edges[3][i].first) == get(edges[3][i].second))
			{
				ans ++;
			}
			else
			{
				merge(edges[3][i].first,edges[3][i].second);
			}
		}
		for(int i=0;i<edges[1].size();i++)
		{
			if(get(edges[1][i].first) == get(edges[1][i].second))
			{
				ans++;
			}
			else
			{
				merge(edges[1][i].first,edges[1][i].second);
			}
		}
		//cout<<ans<<endl;
		int top = get(1);
		for(int i=1;i<=n;i++)
		{
			if(top!= get(i)) 
			{
			cout<<"-1";
			return;
		    }
		}
		// Women 2-3
		init();
		for(int i=0;i<edges[3].size();i++)
		{
			if(get(edges[3][i].first) == get(edges[3][i].second))
			continue;
			else
			{
				merge(edges[3][i].first,edges[3][i].second);
			}
		}
		for(int i=0;i<edges[2].size();i++)
		{
			if(get(edges[2][i].first) == get(edges[2][i].second))
			{
				ans++;
			}
			else
			{
				merge(edges[2][i].first,edges[2][i].second);
			}
		}
		top = get(1);
		for(int i=2;i<=n;i++)
		{
			if(top!= get(i)) 
			{
			cout<<"-1";
			return;
		    }
		}
		
	    cout<<ans<<endl;
		
	}
	int main()
	{
		
		
			scanf("%d%d",&n,&m);
			for(int i=0;i<m;i++)
			{
				int a,b,c;
				scanf("%d%d%d",&a,&b,&c);
				edges[c].push_back({a,b});
			}
			kruskal();
	}
