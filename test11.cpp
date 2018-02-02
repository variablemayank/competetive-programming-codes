#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

#define PII       pair<int,int>
#define all(c)    c.begin(),c.end()
#define sz(c)     (int)c.size()
#define clr(c)    c.clear()
#define pb        push_back
#define mp        make_pair
#define cin(x)    scanf("%d",&x)
#define MOD		1000000007
#define EPS		1E-10

int dp[300][1 << 10];
int bit[300];
int N;
const int inf = 100000000;
int cost[1000];
              
int solve(int idx,int mask)
{
    cout<<"idx"<<idx<<"mask"<<mask<<endl;
	if(mask == 0) return 0;
	else if(idx == N) return inf;
	else if(dp[idx][mask] != -1) return dp[idx][mask];
//	cout<<"idx"<<idx<<" "<<" mask "<<mask<<endl; 
	int minCost = solve(idx + 1, mask);
	cout<<"nwterwr"<<endl;
	//cout<<"idx"<<idx<<" "<<" mask "<<mask<<endl;
	minCost = min(minCost, cost[idx] + solve(idx + 1, mask & bit[idx]));
	//cout<<"idx"<<idx<<" "<<" mask "<<mask<<endl;
	return (dp[idx][mask] = minCost);
}

int arr[1000];

vector<int> calc(int n)
{
	vector<int> ret;
	for(int i = 2; i * i <= n; i++)
	{
		if(n%i) continue;
		ret.pb(i);
		while(n%i == 0)
			n /= i;
	}
	if(n > 1)
		ret.pb(n);
	return ret;
}

int main()
{
	cin >> N;
	int ans = INT_MAX;
	for(int i = 0; i < N; i++)
		cin >> arr[i];
	for(int i = 0; i < N; i++)
		cin >> cost[i];
	for(int i = 0; i < N; i++)
	{
		memset(bit,0,sizeof(bit));
		memset(dp,-1,sizeof(dp));
		vector<int> primes = calc(arr[i]);
		for(int j = 0; j < N; j++)
		{
			for(int k = 0; k < sz(primes); k++)
			{
				if(arr[j] % primes[k] == 0)
					bit[j] |= (1 << k);
			}
		}
		cout<<"bit"<<bit[i]<<endl;
		ans = min(ans, cost[i] + solve(0,bit[i]));
	}
	if(ans >= 100000000)
		ans = -1;
	cout << ans << endl;
	return 0;
}
