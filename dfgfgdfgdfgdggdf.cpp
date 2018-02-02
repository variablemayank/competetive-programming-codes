#include<bits/stdc++.h>
using namespace std;

string s[550];
bool visited[3][550];
int dx[16] = {-1,0,0,1,1,-1,-1,1}; 
int dy[16] = {0,-1,1,0,1,-1,1,-1}; 

int n,m;

int ok (int x,int y) 
{ 
    if (x < 0 || y < 0 || x > n-1 || y > m-1) return 0; 
    return 1; 
}

int dfs(int x,int y)
{
    visited[x][y] =1;
    int count =0;
    for(int i=0;i<4;i++)
    {
    	int nx = x+ dx[i];
    	int ny = y+ dy[i];
        if(ok(nx,ny) && visited[nx][ny]==0)
        {
        	if(s[nx][ny]=='#')
        	count++;
        	
		}
	}
	if(count ==0)
	{
		for(int i=0;i<4;i++)
        {
	    	int nx = x+ dx[i];
	    	int ny = y+ dy[i];
	        if(ok(nx,ny) )
	        {
	        	if(s[nx][ny]=='#')
	        	count++;
			}
	    }
	    if(count==1)
	    return 1;
	    else return 0;
	}
	
	if(count==1)
	{
		for(int i=0;i<4;i++)
		{
			int nx = x+dx[i];
			int ny = y+dy[i];
			if(ok(nx,ny)&&visited[nx][ny]==0 &&s[nx][ny]=='#')
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
		n= 2;
		cin>>m;
		for(int i=0;i<2;++i) cin>>s[i];
		
		//memset(visited,0,sizeof(visited));
		bool flag =false;
		int ans=0;
		bool check = false;
		for(int i=0;i<2;++i)
		{
			for(int j=0;j<m;++j)
			{
				if(s[i][j]=='#')
				{
					int x= i;
					int y =j;
				    int count =0;
				    for(int k=0;k<4;k++)
				    {
				    	int nx = x+dx[k];
				    	int ny = y+dy[k];
				    	if(ok(nx,ny)&&s[nx][ny]=='#')
				    	count++;
				    	
					}
					if(count ==1)
					{
						memset(visited,false,sizeof(visited));
						if(dfs(i,j))
						{
							bool flag = false;
							for(int ii=0;ii<2;ii++)
							{
								for(int jj=0;jj<m;jj++)
								{
									if(visited[ii][jj]==1)
									{
										 x = ii;
										 y = jj;
										 for(int k=0;k<8;k++)
										 {
										 	int nx = x+dx[k];
										 	int ny = y+dy[k];
										 	if(ok(nx,ny)&&visited[nx][ny]==0&&s[nx][ny]=='#')
										 	{
										 	 flag =1;
											 goto done;	
											}
										 }
									}
								}
							}
						}
						done:;
						
						if(flag==0)
						{	
					    ans++;
					   // check =true;
					    //break;
				        }
					}
				  
				}
			}
		//	if(check==true) break;
		}
		if(ans==2) cout<<"yes\n";
		else cout<<"no\n";
		         	    
	}
	return 0;
}
