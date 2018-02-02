#include<bits/stdc++.h>
using namespace std;

const int maxi  = 100005;

vector<int> graph[maxi],freq[maxi];

int deg[maxi],parent[maxi],ans[maxi];
int comp;
bool active[maxi];
int ranki[maxi];


int get(int x)
{
	if(x==parent[x])
	return x;
	return (parent[x]=get(parent[x]));
}
void merge(int x,int y)
{
	x = get(x);
	y = get(y);
	if(x==y)
	{
		return;
	}
	if(ranki[x]<ranki[y])
	swap(x,y);
	ranki[x]+= ranki[y];
	parent[y] = x;
	comp--;
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<maxi;i++)
		{
			graph[i].clear();
			freq[i].clear();
			deg[i] =0;
			active[i] =0;
		}
		
		//memset(deg,0,sizeof(deg));
		int ver,edge;
		cin>>ver>>edge;
		for(int i=0;i<edge;i++)
		{
			int u,v;
			cin>>u>>v;
			graph[u].push_back(v);
			graph[v].push_back(u);
			deg[u]++;
			deg[v]++;
		}
		
		comp  =ver;
		for(int i=1;i<=ver;i++)
		{
			parent[i] =i;
			ranki[i] =1;
			freq[deg[i]].push_back(i);
			
		}
		
		for(int i=ver-1;i>=0;i--)
		{
			ans[i]= comp -1;
			for(auto u :freq[i]) active[u] =1;
			
			for(auto u:freq[i])
			{
				for(auto v: graph[u])
				{
					if(active[v]==0) continue;
					merge(u,v);
				}
			}
		}
		for(int i=0;i<ver;i++)
		cout<<ans[i]<<" ";
		cout<<endl;
	}
}
