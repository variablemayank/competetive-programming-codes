#include<bits/stdc++.h>
 
using namespace std;
const int maxn=1000005;
int n,m,dp[maxn],best,path[maxn],root;
vector<pair<int,int>> g[maxn];
 
int dfs_With_dp(int u)
{
    if(dp[u]) return dp[u];
    dp[u]=1;
    for(auto v:g[u]) {
        int c=v.first;
        if(dp[u]<dfs_With_dp(c)+1) {
            dp[u]=dp[c]+1;
            path[u+1]=c+1;
        }
    }
    return dp[u];
}
 
int main()
{
    int x,y;
    scanf("%d",&m);
    for(int i=0;i<m-1;i++) {
        scanf("%d%d",&x,&y);
        x-=1;
        y-=1;
        g[x].push_back(make_pair(y,i+1));
    }
    for(int i=0;i<m-1;i++) {
        int path_len=dfs_With_dp(i);
        if(best<path_len) {
            root=i;
            best=path_len;
        }
    }
    cout<<"longest path length : "<<best-1<<endl;
    int u=root+1;
    cout<<"path Sequence: ";
    while(path[u]!=0) {
        cout<<u<<" ";
        u=path[u];
    }
    cout<<u<<endl;
    return 0;
}
