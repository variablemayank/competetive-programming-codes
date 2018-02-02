#include<bits/stdc++.h>
using namespace std;

string s[55];
int dx[] ={1,-1,0,0};
int dy[] ={0,0,-1,1};

bool visited[55][55];
int n,m;
bool flag = false;
bool range(int x ,int y)
{
	return (x>=0 && x<n && y>=0 &&y<=m)?true:false;
}
bool  dfs(int x,int y,int px,int py)
{
	if(visited[x][y]) 
	{
		return true;
	}
	flag = false;
	visited[x][y] = true;
	for(int i=0;i<4;i++)
	{
		 int ax= dx[i]+x ;
		 int ay= dy[i]+y;
		 if(ax==px && ay == py) continue;
		 if(range(ax,ay))
		 {
		   if(s[ax][ay]==s[x][y]) flag|= dfs(ax,ay,x,y);
		 }
	}
	return flag;
}

int main()
{
	//int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>s[i];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
			if(!visited[i][j])
			{
			   bool ans =dfs(i,j,-1,-1);
			   if(ans) return cout<<"Yes\n",0;
		    }
		}
	}
	
	cout<<"No\n";
}
