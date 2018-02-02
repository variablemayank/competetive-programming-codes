#include<bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
VI G[100005];
int arr[100005];
int brr[100005];
int depth[100005];
int timer[100005];

int get_vertex(int edges,int v)
{
	if(arr[edges] == v) return brr[edges];
	return arr[edges];
}
int main()
{
	int n,k,m;
	cin>>n>>m>>k;
	for(int i=0;i<m;i++)
	{
	
		cin>>arr[i]>>brr[i];
		G[arr[i]].push_back(i);
		G[brr[i]].push_back(i);
		timer[i]  =1e9;
	}
	
	for(int i=0;i<k;i++)
	{
		int a,b;
		cin>>a>>b;
		--b;
		timer[b]  =a;
 	}
 	
 	for(int i=1;i<=n;i++) depth[i] =1e9;
 	
 	//Bfs 
 	queue<int> pq;
 	pq.push(1);
 	depth[1] =0;
 	
 	while(pq.size())
 	{
 		int top = pq.front();
 		cout<<"top"<<top<<endl;
 		pq.pop();
 		
 		 for(int i=0;i<G[top].size();i++)
 		 {
 		     int edge = G[top][i];   
 		     
 		     cout<<"edge "<<edge<<endl;
			 if( timer[edge] <= depth[top]) continue;
			 int to  = get_vertex(edge,top);
			 
			 if(depth[to] >  depth[top]+1)
			 {
			 	depth[to]  = depth[top] +1;
			 	pq.push(to);
			 }
			 
		 }
	 }
	 
	 if(depth[n] > 1e5) depth[n] = -1;
	 
	 //cout<<depth[n-1];
	 cout<<depth[n]<<endl;
	 return 0;
	 // bye bye
}
