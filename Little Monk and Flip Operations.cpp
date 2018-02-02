    #include<bits/stdc++.h>
     
    using namespace std;
     
    #define si(x) scanf("%d",&x)
    #define sll(x) scanf("%lld",&x)
    #define pri(x) printf("%d",x)
    #define pll(x) printf("%lld",x)
    #define sstr(s) scanf("%s",s)
    #define nl printf("\n")
    #define ll long long int
    #define pii pair<int,int>
    #define pLL pair<ll,ll>
    #define vi vector<int>
    #define pb push_back
    #define mp make_pair
    #define fr first
    #define se second
     
    const int mod = 1000000007;
     
    bool visited[100005];
    vi g[100005];
    int a[100005];
    int ans[100005][33];
     
    void dfs(int u) {
    	cout<<" u is "<<u<<endl;
        visited[u] = 1;
        for(int i=0;i<g[u].size();i++) 
		{
            int v = g[u][i];
            cout<<"v is "<<v<<endl;
            if(!visited[v]) {
                dfs(v);
                for(int j=0;j<32;j++) {
                    ans[u][j] = max(ans[u][j],ans[v][j]);
                    cout<<"ans[u][j] is  ans u and j is "<<u<<" "<<j<<" "<<ans[u][j]<<endl;
                    cout<<"ans[v][j] is is ans v and j "<<v<<" "<<j<<" "<<ans[v][j]<<endl;
                }
            }
        }
        cout<<"u2is "<<u<<endl;
        for(int i=0;i<32;i++)
		 {
           if(a[u] & (1<<i))
		    {
               if(ans[u][i]%2==0) {
                    ans[u][i]++;
                }
           }
            else {
                if(ans[u][i]%2==1) {
                    ans[u][i]++;
                }
            }
        }
    }
     
    int main()
    {
        int n,A;
        si(n); si(A);
        for(int i=0;i<n-1;i++) {
            int u,v; si(u); si(v);
            g[u].pb(v);
            g[v].pb(u);
        }
        for(int i=1;i<=n;i++) {
            si(a[i]);
        }
        dfs(A);
       int ret = 0;
        for(int i=0;i<32;i++) {
            ret += ans[A][i];
        }
        cout<<ret<<endl;
    }
