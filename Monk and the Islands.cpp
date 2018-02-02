#include<bits/stdc++.h>
using namespace std;

const int maxi =100002;
const int mod = 1e9+7;
#define sd(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pd(n) printf("%d\n",n)
#define pl(n) printf("%lld\n",n)

int level[maxi];
bool visited[maxi];
int n,m,u,v;
int main()
{
	int T;
	cin>>T;
	while(T--)
    {
    		
	cin>>n>>m;
	vector<int> edges[10002];
	vector<int> ::iterator it ;
	for(int i=0;i<m;i++)
	{
		
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	memset(level,0,sizeof(level));
	memset(visited,false,sizeof(visited));
	queue<long > q;
	visited[1] = true;
	level[1] =1;
	q.push(1);
	while(!q.empty())
	{
		bool flag= false;
		int temp = q.front();
		q.pop();m
		for(it = edges[temp].begin();it!=edges[temp].end();it++)
		{
			if(visited[*it]== false)
			{
			  visited[*it] = true;
			  if(*it == n)
			  {
			  	cout<<level[temp]<<endl;
			  	flag = true;
			  	break;
			  }
			q.push(*it);
			level[*it] = level[temp] +1;
			}
		
		}
		if(flag== true) break;
	}
	
    }
	return 0;
}
