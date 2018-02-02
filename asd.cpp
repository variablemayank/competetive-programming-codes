#include<bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for(int i=(a);i<(b);i++)


#define ALL(V) V.begin(), V.end()
#define SZ(V) (int)V.size()
#define PB push_back

typedef long long Int;
typedef unsigned long long UInt;
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef pair<Int, Int> PLL;
typedef pair<double, double> PDD;

const int INF = 1000000000;

const int MAX = 1000007;


int n ;
Int a , b;

VI primes(int x)
{
	VI p;
	for(int i = 2; i * i <= x; ++i)
		if (x % i == 0)
		{
			p.push_back(i);
			while (x % i == 0)
			{
				x /= i;
			}
		}
	if (x != 1)
		p.push_back(x);
	return p;
}

Int dp[MAX][3];

Int solve(VI c)
{
	VI p = primes(c[0]);
	VI p1 = primes(c[0] - 1);
	FOR(i,0,p1.size()) p.push_back(p1[i]);
	p1 = primes(c[0] + 1);
	FOR(i,0,p1.size()) p.push_back(p1[i]);
	p1 = primes(c.back());
	FOR(i,0,p1.size()) p.push_back(p1[i]);
	p1 = primes(c.back() + 1);
	FOR(i,0,p1.size()) p.push_back(p1[i]);
	p1 = primes(c.back() - 1);
	FOR(i,0,p1.size()) p.push_back(p1[i]);

	sort(ALL(p));
	p.resize(unique(ALL(p)) - p.begin());

	Int res = 1LL * INF * INF;
	FOR(t,0,p.size())
	{
		int pr = p[t];

		dp[0][0] = dp[0][1] = dp[0][2] = 0;
		FOR(i,0,n)
		{
			int val = min(c[i] % pr , pr - c[i] % pr);

			dp[i + 1][0] = dp[i + 1][1] = dp[i + 1][2] = 1LL * INF * INF;
			if (val <= 1)
			{
				dp[i + 1][2] = min(dp[i][2] + a * val , min(dp[i][1] + a * val, dp[i][0] + a * val));
			}
			dp[i + 1][1] = min(dp[i][0] , dp[i][1]) + b;
			if (val <= 1)
			{
				dp[i + 1][0] = dp[i][0] + a * val;
			}
		}
		Int r = min(dp[n][2] , min(dp[n][1] , dp[n][0]));
		res = min(res , r);
	}
	return res;
}

int main()
{
    
	cin >> n >> a >> b;
	swap(a , b);
	VI c(n);
	FOR(i,0,n)
	{
		scanf("%d" , &c[i]);
	}
	Int res = solve(c);

	cout << res << endl;
	return 0;
}
