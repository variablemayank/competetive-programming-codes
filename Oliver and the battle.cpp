#include<bits/stdc++.h>
using namespace std;

int arr[1003][1003];
bool visited[1003][1003];

int bfs(int x,int y )
{
	queue<pair<int,int> > pq;
	pq.push(make_pair(x,y));
	visited[x][y] = true;
	
	int count =1;
    while(pq.empty()==false) // traversing the graph
    {
   	  int u = pq.front().first;
   	  int v=  pq.front().second;
   	  pq.pop();
   	  for(int i=-1;i<=1;i++)
   	  {
   	        for(int j=-1;j<=1;j++)
		    {
		   	
		   	   if(visited[u+i][v+j] ==false && arr[u+i][v+j] ==1)
		   	   {
		   	     visited[u+i][v+j] =true;
		   	     pq.push(make_pair(u+i,v+j));
					count++;	
			   }
		    }	
	  }
    }
    
    return count;
}
int main()
{
	int t;
	scanf("%d",&t);

	while(t-->0)
	{
		
		memset(arr,0,sizeof(arr));
	    memset(visited,false,sizeof(visited));
		int n,m;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++ )
			cin>>arr[i][j];
		}
		
		int components =0,troupsum=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(visited[i][j] ==false && arr[i][j] ==1)
				{
					troupsum = max(troupsum,bfs(i,j));
					components++;
				}
			}
		}
		cout<<components<<" "<<troupsum<<endl;
	}
}
