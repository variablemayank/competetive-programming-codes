#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100005];


int main()
{
	int n,m;
	cin>>n>>m;
	int deg[n+1]={0};
	for(int i=1;i<=m;i++)
	{
		int a,b;
		cin>>a>>b;
        deg[a]++;
		deg[b]++;
		graph[a].push_back(b);
		graph[b].push_back(a);		
	}
	set<pair<int,int > > s;
	for(int i=1;i<=n;i++)
	{
		s.insert(make_pair(deg[i],i));
	}
	
	int count =0;
	while(!s.empty())
	{
		pair<int,int> p = *s.rbegin();
		s.erase(s.find(p));
		auto var = p.second;
		int siz = graph[var].size();
		count++;
		for(int i=0;i<siz;i++)
		{
			auto it1 = graph[var][i];
			if(s.find(make_pair(deg[it1],it1))!=s.end())
			{
				s.erase(make_pair(deg[it1],it1));
				deg[it1]--;
				if(deg[it1]>0)
				{
			        s.insert(make_pair(deg[it1],it1));
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
