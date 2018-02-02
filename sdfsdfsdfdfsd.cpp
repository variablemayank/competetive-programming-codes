#include<bits/stdc++.h>
using namespace std;


string str[3][550];
int vis[3][550];
int arr[3][550];
int dx[16] = {-1,0,0,1,1,-1,-1,1}; 
int dy[16] = {0,-1,1,0,1,-1,1,-1};

int N,M;

int ok(int x,int y)
{
	 if (x < 1 || y < 1 || x > N || y > M) return 0; 
    return 1;
}

int dfs(int x,int y)
{
	vis[x][y] =1;
    int count =0;
    
    for(int i=0;i<4;i++)
    {
       int nx = x+dx[i];
       int ny = y+dy[i];
       if(ok(nx,ny) && vis[nx][ny]==0)
       {
       	 count+= arr[nx][ny];
	   }
	   
	}
	if(count ==0)
	{
		for(int i=0;i<4;i++)
       {
		       int nx = x+dx[i];
		       int ny = y+dy[i];
		       if(ok(nx,ny) && vis[nx][ny]==0)
		       {
		       	  count+=arr[nx][ny];
			   }
	   
	   }
	   if(count ==1) return 1;
	   else return 0;
    }
    
	if(count ==1)
	{
	    for(int i=0;i<4;i++)
		{
		  int nx = x+dx[i];
		    int ny = y+dy[i];	
		 if(ok(nx,ny)&& vis[nx][ny]==0&& arr[nx][ny]==1)
		 {
		 	return dfs(nx,ny);
		 }	
	    }
	}
	return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		
		string s[550];
		for(int i=0;i<2;i++)
		{
			cin>>s[i];
		}
        
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(s[i][j]=='#')
				str[i+1][j+1] = '#';
				else str[i+1][j+1] = '.';
				
			}
		}		
		memset(arr,0,sizeof(arr));
		
		for(int i=1;i<=2;i++)
	    {     
		for(int j=1;j<=M;j++)
		{
			if(str[i][j]== "#")
			arr[i][j] =1;
			else arr[i][j] =0;
		}
	    }
	    
	    memset(vis,0,sizeof(vis));
	    
	    int ans =0;
	    bool flag =false;
	    
		for(int i=1;i<=2;i++)
		{
			for(int j=1;j<=m;j++)
			{
			    if(str[i][j]!= "#")
			    continue;
			    int x= i;
			    int y =j;
			    int count =0;
			    for(int k=0;k<4;k++)
			    {
			    	int nx = x+ dx[k];
			    	int ny  = y+dy[k];
			    	
			    	if(ok(nx,ny))
			        count+= arr[nx][ny];
			    }
			    if(count ==1)
			    {
			       memset(vis,0,sizeof(vis));
			       int s =0;
			        if(dfs(i,j))
			        {
			       	 cout<<"yes\n";
			       	 flag =true;
			       	 break;
			        }
			    }
			    else{
			    	cout<<"no\n";
			    	break;
				}
			   }
			   if(flag ==true) break;
			    
			}
		}
		
	}
