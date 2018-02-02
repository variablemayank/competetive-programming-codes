# include <bits/stdc++.h>
using namespace std;
# define fi cin
# define fo cout
int main(void)
{
    int n;
    fi>>n;
    int g = 0,v,cnt = 0,ans = 0;
    while (n --)
    {
        int v;
        fi>>v;
        g = __gcd(g,v);
        if (v & 1) ++cnt;
        else ans += (cnt / 2) + 2 * (cnt & 1),cnt = 0;
    }
    ans += (cnt / 2) + 2 * (cnt & 1);
    fo << "YES\n";
    if (g == 1)
        fo << ans << '\n';
    else
        fo << "0\n";
    cerr << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms" << '\n';
    return 0;
}
