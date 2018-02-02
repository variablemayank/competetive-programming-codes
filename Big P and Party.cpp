#include<bits/stdc++.h>
using namespace std;

vector<int> G[1003];
bool visited[1003];
int depth[1003];

void bfs()
{
    queue<int> pq;
	pq.push(0);
	depth[0] =0;
	
	while(!pq.empty())
	{
		
		
	 int top = pq.front();
	 pq.pop();
	 
	 for(int i=0;i<G[top].size();i++)
	 {
	       if(!visited[G[top][i]])
		   {
		     visited[G[top][i]] = true;
		     depth[G[top][i]] = depth[top] +1;
		     pq.push(G[top][i]);	
		   }
	 }	
	 
	 
	}  
}
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
  	 int u,v;
  	 cin>>u>>v;
  	 G[u].push_back(v);
  	 G[v].push_back(u);
  }
  
  	 memset(visited,false,sizeof(visited));
  	 memset(depth,-1,sizeof(depth));
  	 
  	 bfs();
  	 for(int i=1;i<n;i++)
  	 {
  	   if(depth[i]!= -1) cout<<depth[i]<<endl;
	   else cout<<depth[i]<<endl;	
	 }
  	 
  }

