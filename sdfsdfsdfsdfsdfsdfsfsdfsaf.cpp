#include<bits/stdc++.h>
using namespace std;
	
#define jadu ios_base::sync_with_stdio(false);
#define rep(i,a,b) for (long long i = a; i <= b; i++)
#define f first
#define s second
#define lelo(x) scanf("%d",&x);
#define dedo(x) prlong longf("%d",x); 	
#define PB push_back
#define MP make_pair
#define sz(c)     (long long)c.size()
typedef long long ll;
typedef vector<long long> vi;
typedef pair<long long,long long> pi;
const long long mod = 1000000007;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }

pair<ll,ll> best;

ll my_pow(ll x) { return x * x * x; }

void rec(ll m, ll steps, ll subtracted)
{
	if(m == 0) {
		best = max(best, make_pair(steps, subtracted));
		return;
	}
	ll x = 1;
	while(my_pow(x+1) <= m) ++x;
	trace1(x);
	trace3(m - my_pow(x), steps+1, subtracted + my_pow(x));
	
	rec(m - my_pow(x), steps+1, subtracted + my_pow(x));
	if(x - 1 >= 0)
	{
		trace1(x-1);
	    trace3(m - my_pow(x), steps+1, subtracted + my_pow(x));
		rec(my_pow(x)-1-my_pow(x-1), steps+1, subtracted + my_pow(x-1));
	}
}

long long main() {
	ll m;
	scanf("%lld", &m);
	rec(m, 0, 0);
	prlong longf("%lld %lldn", best.first, best.second);
	return 0;
}
