#include<bits/stdc++.h> 
 
using namespace std; 
 
 
#define MAXN 550
 
#define X (x+dx[k]) 
#define Y (y+dy[k]) 
 
#define NEI8 for(int k=0; k<8; k++) 
#define NEI4 for(int k=0; k<4; k++) 
 
int dx[16] = {-1,0,0,1,1,-1,-1,1}; 
int dy[16] = {0,-1,1,0,1,-1,1,-1}; 
 
int ar[550][550] = {}; 
int vis[550][550] = {}; 
int S = 0; 
int N,M; 
 
int ok (int x,int y) { 
    if (x < 1 || y < 1 || x > N || y > M) return 0; 
    return 1; 
} 
 
int dfs (int x,int y) 
{ 
    S++; 
     
    vis[x][y] = 1; 
 
    int c = 0; 
    for(int k=0;k<4;k++)
	{ 
         if (ok(X,Y) && vis[X][Y] == 0) c += ar[X][Y]; 
    } 
     
    if (c==0)
	{ 
       for(int k=0;k<4;k++)
	   { 
            if (ok(X,Y)) c += ar[X][Y]; 
       } 
       if (c == 1) return 1; 
       else return 0; 
    } 
     
    if (c==1)
	for(int k=0;k<4;k++) 
   	{ 
         if (ok(X,Y) && vis[X][Y] == 0 && ar[X][Y] == 1) { 
            return dfs(X,Y); 
         } 
    }
	 
    return 0; 
} 
 
 
int number () 
{ 
    memset(ar,0,sizeof(ar)); 
    string s[550];
    int m;
    cin>>m;
    
    for(int i=0;i<2;i++) cin>>s[i];
    
    N = 2; 
    M = m;
    int ans = 0; 
  
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<m;j++)
		{ 
            if(s[i][j]=='#')
            ar[i+1][j+1]=1;
            else  ar[i+1][j+1] = 0;
        } 
    } 
    
   /* for(int i=1;i<=2;i++)
    {
    	for(int j=1;j<=m;j++)
    	{
    		cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
 
    for(int i=1; i<=N; i++)
	{ 
        for (int j=1; j<=M; j++)
		{
            if (ar[i][j] != 1) continue; 
            int c = 0; 
            int x = i; 
            int y = j; 
             
            for(int k=0;k<4;k++) 
			{ 
                if (ok(X,Y)) 
				{ 
                   c += ar[X][Y]; 
                } 
            } 
 
            if (c == 1) 
			{ 
               memset(vis,0,sizeof(vis)); 
               S = 0; 
               if (dfs(i,j)) 
			   { 
 
                int flag = 0; 
                for (int i1=1; i1<=N; i1++) 
			    { 
	                for (int j1=1; j1<=M; j1++) 
					{ 
	                   if (vis[i1][j1]==1) 
					   { 
			               x = i1; 
			               y = j1; 
	                        NEI8 
						    { 
			                    if (ok(X,Y) && vis[X][Y]==0 && ar[X][Y]==1) 
								{ 
			                       flag = 1; 
			                       goto done; 
			                    } 
	                        } 
	                    } 
	                } 
                }
 
               done:;
               
               if (flag == 0) ans++;
		     } 
           
		    } 
        } 
    } 
    if(ans==2 )cout<<"yes\n";
    else cout<<"no\n";
}  
 
int main()
{
       //ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		number();	
	}
	return 0;
   
}
 
