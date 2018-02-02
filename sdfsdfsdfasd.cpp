#include <bits/stdc++.h>
#pragma comment (linker, "/STACK:100000000")
#define MAX 50100
#define MOD 1000000LL
#define INF 17179869183
#define EPS 1e-12
#define ll long long
using namespace std;
vector<ll> g[MAX];
bitset<MAX> bs[MAX];
bitset<MAX> used;
 
void dfs(ll v)
{
    used.set(v, true);
    ll to;
    for(ll i=0; i<g[v].size(); ++i)
    {
        to = g[v][i];
        if(!used.test(to))
            dfs(to);
        bs[v] |= bs[to];
        bs[v].set(to);
    }
}
int main()
{
    ll n, k, l, r;
    scanf("%lld%lld", &n, &k);
    for(ll i=0; i<k; ++i)
    {
        scanf("%lld%lld", &l, &r);
        g[l].push_back(r);
    }
    for(ll i=1; i<=n; ++i)
        if(!used.test(i))
            dfs(i);
    ll res = 0;
    for(ll i=1; i<=n; ++i)
        res += bs[i].count();
    printf("%lld", res);
}
