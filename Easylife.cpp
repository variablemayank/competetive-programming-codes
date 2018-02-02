#include<bits/stdc++.h>
using namespace std;

int n,m;
int e,v;
vector<int> edge[200005];
bool visited[200005];

void dfs(int s)
{
	if(!visited[s])
	{
		
	e  += edge[s].size();
	v++;
	visited[s] = true;
    }
    for(int i= 0;i< edge[s].size();i++)
    {
    	 if(!visited[edge[s][i]])
    	 {
    	 	dfs(edge[s][i]);
		 }
	}
	
	
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
	   edge[u].push_back(v);
	   edge[v].push_back(u);
	}
	memset(visited,false,sizeof(visited));
	vector< pair<int,pair<int ,int > > > vec;
	for(int i=1;i<=n;i++)
	{
	   if(!visited[i])
	   {
	   	 e = 0;
	   	 v = 0;
	   	 dfs(i);
	   	 e= e/2;
	   	 int density = e/v;
	   	 vec.push_back(make_pair(density,make_pair(e,v)));
	    }
	}
	sort(vec.begin(),vec.end());
	e = vec[vec.size()-1].second.first;
	v = vec[vec.size()-1].second.second;
//	cout<<e<<" "<<v<<endl;
	if(e>v) cout<<">1";
	else
	{
		if(e != 0)
		{
			int factor = __gcd(e,v);
			e = e/factor;
			v = v/factor;
			
		}
		cout<<e<<"/"<<v;
	}
	
	return 0;
}
