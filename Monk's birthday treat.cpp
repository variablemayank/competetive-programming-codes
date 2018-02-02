#include<bits/stdc++.h>
using namespace std;

vector<int>vec[1005];
bool visited[1005];
int cnt =0;

void bfs(int s)
{
   visited[s] = true;
   cnt++;
   stack<int> pq;
   pq.push(s);
   while(!pq.empty())
   {
   	 		 int u =  pq.top();
   	 		 pq.pop();
		   	 for(int i=0;i<vec[u].size();i++)
		   	 {
		   	        if(!visited[vec[u][i]])
					{
					  visited[vec[u][i]] = true;
					  cnt++;	
					  pq.push(vec[u][i]);
					}	
			 }
   }
}
int main()
{
	int ver,edge;
	cin>>ver>>edge;
	for(int i=1;i<=edge;i++)
	{
		int u,v;
		cin>>u>>v;
		vec[u].push_back(v); // directed
	}
	int ans = INT_MAX;
	for(int i=1;i<=ver;i++)
	{
		memset(visited,false,sizeof(visited));
		bfs(i);
		ans = min(ans,cnt);
		cnt =0;
	}
	cout<<ans<<endl;
}
