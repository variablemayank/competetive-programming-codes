#include<bits/stdc++.h>
using namespace std;

typedef long long int LL;

#define inp_s     ios_base::sync_with_stdio(false);cin.tie(0)
#define DRT()     int test_case;cin>>test_case;while(test_case--)

#define VI        vector<int>
#define VS        vector<string>
#define VLL       vector<LL>
#define PII       pair<int,int>

#define all(c)    c.begin(),c.end()
#define sz(c)     c.size()
#define clr(c)    c.clear()
#define pb        push_back
#define mp        make_pair

#define GI(x)     scanf("%d",&x)
#define endn    "\n"

#define FOR(i,a,b)      for(int i=a;i<b;i++)
#define RFOR(i,a,b)     for(int i=b-1;i>=a;i--)

#define gcd(a,b)  __gcd(a,b)
#define MOD       1000000007
#define EPS       1E-10
#define PI      acos(-1)

#define CASE(x)   cout << "Case #" << x << ": ";

int dp[10000001][4];

int main()
{
    inp_s;
    FOR(i,0,10000001) FOR(j,0,4) dp[i][j] = 0;
    int n;
    cin >> n;
    dp[0][0] = 1;
    FOR(steps , 1 , n+1)
    {
        LL val = 1LL * dp[steps-1][0] + dp[steps-1][1] + dp[steps-1][2] + dp[steps-1][3];
        cout<<"val"<<val<<endl;
        FOR(j,0,4)
        {
            dp[steps][j] = (val - dp[steps-1][j]) % MOD;
            cout<<"steps "<<steps<<"j "<<j<<endl;
            cout<<dp[steps][j]<<endl;
        }
    }
    //cout << dp[n][0] << endl;
    return 0;
}
