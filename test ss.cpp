#include<bits/stdc++.h>
using namespace std;
	
#define jadu ios_base::sync_with_stdio(false);
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define f first
#define s second
#define lelo(x) scanf("%d",&x);
#define dedo(x) printf("%d",x); 	
#define PB push_back
#define MP make_pair
#define sz(c)     (int)c.size()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int mod = 1000000007;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }

const int maxi =100005;
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];

const int N = 1e5 + 5;

vector<int> adj[N], V[N];
int deg[N], p[N], sz[N], ans[N];
bool active[N];
int components;

int par(int x){
    if(p[x] != x)   p[x] = par(p[x]);
    return p[x];
}

void dsu(int a, int b){
    int p1 = par(a), p2 = par(b);
    if(p1 == p2)    return ;
    if(sz[p1] < sz[p2]) swap(p1, p2);
    sz[p1] += sz[p2];
    p[p2] = p1;
    components--;
}

void solve(){

    for(int i = 0; i < N; i++)
	{
        adj[i].clear();
        V[i].clear();
        deg[i] = 0;
        active[i] = 0;
    }

    int n, m, u, v;

    cin>>n>>m;
    while(m--)
	{
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

        deg[u]++, deg[v]++;
    }

    components = n;
    for(int i = 1; i <= n; i++)
	{
        p[i] = i, sz[i] = 1;
        V[deg[i]].push_back(i);
    }

    for(int i = n - 1; i >= 0; i--)
	{
    	
        ans[i] = components - 1;
        for(auto u : V[i])  active[u] = 1;
        for(auto u : V[i])
		{
			trace1(u);
            for(auto v : adj[u])
			{
                if(active[v] == 0)  continue;
                trace2(u,v);
                dsu(u, v);
            }
        }
    }

    for(int i = 0; i < n; i++)  cout<<ans[i]<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)  solve();
}
