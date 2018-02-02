#include<bits/stdc++.h>
 
using namespace std;
 
#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define ss(ch) scanf("%s",ch)
#define chr getchar()
#define pi(x) printf("%d",x)
#define pii(x,y) printf("%d %d",x,y)
#define pl(x) printf("%lld",x)
#define pll(x,y) printf("%lld %lld",x,y)
#define ps(ch) printf("%s",ch)
#define sf scanf
#define pf printf
#define pcs(x,y) printf("Case %d: %s", x, y)
#define pci(x,y) printf("Case %d: %d", x, y)
#define pcl(x,y) printf("Case %d: %lld", x, y)
#define NL printf("\n")
#define nl '\n'
#define mod 1000000007
#define FI freopen("in.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)
 
#define FOR(i,j,k) for(int i = j; i < k; i++)
#define rep(l,n) FOR(l,0,n)
#define per(i,j,k) for(int i = j; i > k; i--)
 
#define PI acos(-1.0)
 
#define pb(x) push_back(x)
#define ppb() pop_back()
#define sz(x) x.size()
#define xx first
#define yy second
#define mp(a,b) make_pair(a,b)
#define ssz(a) strlen(a)
#define eps 1e-9
 
#define mem(ara,val) memset(ara,val,sizeof(ara))
#define clr(ara) mem(ara,0)
#define st(ara) mem(ara,-1)
#define all(a) a.begin(),a.end()
//cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
 
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector< vector<int> > VVI;
typedef pair<int,int> PII;
typedef vector< PII > VII;
 
int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};
 
///=>=>=>=>=>=>=>=>=>00100<=<=<=<=<=<=<=<=<=///
 
int a[100010], b[100010];
 
VII v;
 
int main(){
    //std::ios_base::sync_with_stdio(0);cin.tie(0);
    //FI;//FO;
 
    int t = 0, z = 0, len;
 
    int n, k = 0, m = 0; int ans = 0;
 
    siii(n,k,m);
 
    rep(l,n) si(a[l]);
 
    v.clear();
 
    sort(a, a + n);
    v.pb(mp(a[n-1], a[0]));
 
    rep(i,31){
        for(int j = 0; j < n; j += 2){
            a[j] ^= m;
        }
        sort(a, a + n);
        v.pb(mp(a[n-1], a[0]));
    }
 
    if(k <= 30)
        pii(v[k].xx,v[k].yy);
 
    else{
        if(k & 1)
            pii(v[28].xx,v[28].yy);
 
        else
            pii(v[29].xx,v[29].yy);
    }
 
    /*
 
    int mx = 0, mn = INT_MAX;
 
    rep(l,n){
        mx = max(mx, a[l]);
        mn = min(mn, a[l]);
    }
 
    pii(mx,mn);*/
 
    return 0;
}
