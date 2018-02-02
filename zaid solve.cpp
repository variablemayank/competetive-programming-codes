#include "bits/stdc++.h"
using namespace std;

const int MAX=1e5;

vector<int> vec[MAX];

int cycle[MAX];
int mark[MAX];//0->unvisited,1->visiting,2->visited
int par[MAX];

void dfs(int node)
{
//	cout<<node<<" ";
	mark[node]=1;
	for(auto A:vec[node])
	{
		if(mark[A]==0)
		par[A]=node,dfs(A);
		else if(mark[A]==1)
		{
			par[A]=node;
			int cur=A,p[MAX]={0};
			//cout<<A<<" ";
		    while(p[cur]==0)
		    {
		    	//cout<<cur<<" ";
		    	cycle[cur]=1;
		    	p[cur]=1;
		    	cur=par[cur];
			}
		}
	}
	mark[node]=2;
}

int main()
{
	int N,K,ans=0;
	cin>>N>>K;
	for(int A=1;A<=K;A++)
	{
		int X,Y,SX,SY;
		cin>>X>>Y>>SX>>SY;
		if(SY>SX)
		vec[Y].push_back(X);
		if(SY<SX)
		vec[X].push_back(Y);
	}
	for(int A=1;A<=N;A++)
	if(mark[A]==0)
	dfs(A);
	for(int A=1;A<=N;A++)
	ans+=cycle[A];
	cout<<ans;
	return 0;
}
