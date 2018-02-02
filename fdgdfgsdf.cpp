#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
typedef long long int LL;
 
const int N=1e3+5;
const int mod = 1e9+7;
 
LL dp[N][N];
 
bool bug[N][N];
 
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);
 
  //freopen("input.txt","r",stdin);
 
    int n,m,p;
    cin>>n>>m>>p;
     
    for(int i=1;i<=p;i++)
    {
    	 int x,y;
    	 cin>>x>>y;
    	 bug[x][y]=true;
    }
    
    if(!bug[1][1])
    dp[1][1]=1;
 
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=m;j++)
    	{
            if((i==1)&&(j==1))continue;
            if(!bug[i][j])
               dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
    	}
    }
 
    cout<<dp[n][m]<<endl;
   
  return 0;
} 
