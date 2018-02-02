#include<bits/stdc++.h>
using namespace std;

int n,m,q,sum;
int arr[1003][1003];
int visited[1003][1003];
void sol(int u,int v)
{
    visited[u][v] = true;
	sum--;
	if(u+1 <=n && u>=1 && v >=1 && v<=m && !visited[u+1][v] && arr[u+1][v]==1)
	{
		sol(u+1,v);
	}
	if(u-1 >=1 && u<=n && v>=1 && v<=m && !visited[u-1][v] && arr[u-1][v] ==1 )
	{
		sol(u-1,v);
	}
	if( v+1<=m && v>=1  && u>=1 && u<=n &&!visited[u][v+1] && arr[u+1][v]== 1)
	{
		sol(u,v+1);
	}
	if(v-1>=1 && v<=m && u>=1 && u<=n && !visited[u][v-1] && arr[u][v-1]==1)
	{
		sol(u,v-1);
	}
}

int main()
{
	memset(visited,false,sizeof(visited));
	memset(arr,0,sizeof(arr));
	scanf("%d%d%d",&n,&m,&q);
	sum=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==1)
			sum++;
		}
	}
	//cout<<sum<<endl;
	for(int i=0;i<q;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		if(!visited[u][v] && arr[u][v]==1)
		{
			
		  sol(u,v);
	    }
	      printf("%d\n",sum);
	}
	return 0;
}
