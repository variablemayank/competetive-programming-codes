	#include<bits/stdc++.h>
	using namespace std;
	
	const int maxi = 234567;
	int papa[maxi];
	int dist[maxi];
	int color[maxi];
	vector<int> vec[maxi];
	void init()
	{
		for(int i=0;i<maxi;i++) papa[i] = i;
	}
	int get(int x)
	{
		return(x==papa[x] ?x:(papa[x]=get(papa[x])));
	}
	void merge(int a,int b)
	{
		a =get(a);
		b =get(b);
		papa[a] =b;
	}
	
	int solve()
	{
		int src = get(1); 
		for(int i=0;i<maxi;i++)
		dist[i] = INT_MAX;
		
		dist[src] =1;
		queue<int> pq;
		pq.push(src);
		int des = src;
		
		while(!pq.empty())
		{
		     int u = pq.front();
			 des = u;
			 pq.pop();
			 
			 for(int i=0;i<vec[u].size();i++)
			 {
			     int v = vec[u][i];
				 if(dist[v]>dist[u]+1)
				 {
				    dist[v] = dist[u]+1;
					pq.push(v);	
				 }	
			 }	
		}
		
		for(int i=0;i<maxi;i++) dist[i] =INT_MAX;
		dist[des] = 1;
		pq.push(des);
		
		int ans =0;
		while(!pq.empty())
		{
			 int u = pq.front();
			 pq.pop();
			 ans  = dist[u];
			 for(int i =0;i<vec[u].size();i++)
			 {
			 	int v = vec[u][i];
			 	if(dist[v]>dist[u]+1)
			 	{
			 	  dist[v] = dist[u]+1;
				  pq.push(v);	
				}
			 }
		}
		
		return ans;
	}
	int main()
	{
		init();
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>color[i];
		pair<int,int> p[n];
		for(int i=1;i<n;i++)
		{
			cin>>p[i].first;
			cin>>p[i].second;
			if(color[p[i].first] == color[p[i].second])
			merge(p[i].first,p[i].second);
		}
		for(int i = 1;i<n;i++)
		{
			int u = get(p[i].first);
			int v= get(p[i].second);
			if(u!=v)
			{
				vec[u].push_back(v);
				vec[v].push_back(u);
			}
			
		}
		int diameter = solve();
		cout<<(diameter/2)<<endl;
	}
