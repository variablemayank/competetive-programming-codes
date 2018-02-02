
//Editorial soln
#include<bits/stdc++.h>
using namespace std;
#define ll	long long int
struct node
{
	int src,dest;
	ll wght;
};
int par[1005],rnk[1005];
int Find(int nd)
{
	if(par[nd]!=nd)
		par[nd]=Find(par[nd]);
	return par[nd];
}
void Union(int nd1, int nd2)
{
	int x=Find(nd1);
	int y=Find(nd2);
	if(rnk[x]<rnk[y])
		par[x]=y;
	else if(rnk[x]>rnk[y])
		par[y]=x;
	else
	{
		par[y]=x;
		rnk[x]++;
	}
}
bool compare(node n1, node n2)
{
	return n1.wght<n2.wght;
}
vector<node> mst;
void kruskal(vector<node> g, int n)
{
	for(int i=0;i<n;++i)
	{
		par[i]=i;
		rnk[i]=0;
	}
	sort(g.begin(),g.end(),compare);
	int cnt=0,cnt1=0;
	while(cnt!=n-1)
	{
		node ne=g[cnt1++];
		int x=Find(ne.src);
		int y=Find(ne.dest);
		if(x!=y)
		{
			mst.push_back(ne);
			Union(x,y);
			cnt++;
		}
	}
}
ll ans[1005][1005],wt[1005][1005];
vector<int> adj[1005];
bool visited[1005];

int main()
{
	int t;
	scanf("%d",&t);
	int z=0;
	while(t--)
	{
		++z;
		printf("Case: %d\n",z);
		mst.clear();
		int n,p,m;
		scanf("%d %d %d",&n,&p,&m);
		vector<node> graph;
		node nd;
		for(int i=0;i<p;++i)
		{
			scanf("%d %d %lld",&nd.src,&nd.dest,&nd.wght);
			nd.src--;
			nd.dest--;
			graph.push_back(nd);
		}
		kruskal(graph,n);
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<n;++j)
			{
				ans[i][j]=0;
				wt[i][j]=-1;
			}
			adj[i].clear();
		}
		int mst_size=mst.size();
		for(int i=0;i<mst_size;++i)
		{
			wt[mst[i].src][mst[i].dest]=mst[i].wght;
			wt[mst[i].dest][mst[i].src]=mst[i].wght;
			adj[mst[i].src].push_back(mst[i].dest);
			adj[mst[i].dest].push_back(mst[i].src);
		}
		for(int i=0;i<n;++i)
		{
			memset(visited,false,sizeof(visited));
		
			dfs(i,i);
		}
		for(int i=0;i<m;++i)
		{
			int x,y;
			scanf("%d %d",&x,&y);
			x--;
			y--;
			printf("%lld\n",ans[x][y]);
		}
	}
	return 0;
