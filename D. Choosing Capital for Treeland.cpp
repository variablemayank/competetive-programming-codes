	#include<bits/stdc++.h>
	using namespace std;
	
	const int N = 200*1000+10;
	vector<pair<int,int> >vec[N];
	bool visit[N];
	int num[N],dir1;
	
	void dfs(int v)
	{
		visit[v] = true;
		for(int i=0;i<vec[v].size();i++)
		{
			int u = vec[v][i].first;
			if(!visit[u])
			{
				num[u]  = num[v]+vec[v][i].second;
				if(vec[v][i].second==-1)
				dir1++;
				dfs(u);
			}
		}
	}
	int main()
	{
		int n;
		cin>>n;
		for(int i=1;i<n;i++)
		{
			int a,b;
			cin>>a>>b;
			a--;
			b--;
			vec[a].push_back({b,1});
			vec[b].push_back({a,-1});
			
			
		}
		dfs(0);
		
		int ans =INT_MAX;
		for(int i=0;i<n;i++)
		ans = min(ans,num[i]);
		
		cout<<ans+dir1<<"\n";
		for(int i=0;i<n;i++)
		{
			if(num[i]==ans) cout<<i+1<<" ";
		}
		cout<<"\n";
		return 0;
	}
