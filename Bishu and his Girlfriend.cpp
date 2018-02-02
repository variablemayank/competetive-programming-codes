#include<bits/stdc++.h>
using namespace std;

vector<int> G[1003];
bool check[1003];
bool visited[1003];
void bfs()
{
   queue<int> pq;
   pq.push(1);
   visited[1] = true;
   while( !pq. empty() )
	{
	     int top= pq.front();
	     pq.pop();
	    for(int i=0;i<G[top].size();i++)
	    {
	   	 if(!visited[G[top][i]])
	   	 {
	       if(check[G[top][i]]==  true)
	       {
	       	 cout<<G[top][i]<<endl;
	       	 return;
		   }
		   pq.push(G[top][i]);
		}
		
	    }
	} 
}
int main()
{
	int n;
	cin>>n;
    for(int i=0;i<n-1;i++)
    {
      int u,v;
      cin>>u>>v;
      G[u].push_back(v);
       G[v].push_back(u);
    }
	int q;
	cin>>q;
	while(q--)
	{
		int t;
		cin>>t;
		check[t] = true;
	}
     bfs();
     return  0;
}
