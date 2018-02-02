#include<bits/stdc++.h>
using namespace std;

constexpr auto oo  = numeric_limits<int>::max() / 2 - 2;
constexpr int mx = 302;
int n;
int l[mx], c[mx];
unordered_map<int, int> dp[mx];

int solve(int i, int g) {
    if(i == n) return g == 1? 0: oo;
    if(dp[i].count(g)) return dp[i][g];
    int &ret = dp[i][g];

    ret = oo;
    ret = min(ret, solve(i + 1, g));
    ret = min(ret, c[i] + solve(i + 1, __gcd(g, l[i])));

    return ret;
}

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> l[i];
    for(int i=0;i<n;i++) cin >> c[i];

    int ans = solve(0, 0);
    if(ans >= oo) ans = -1;
    cout << ans << endl;
    
    
	return 0;
}
