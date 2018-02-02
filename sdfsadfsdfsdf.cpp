    #define _CRT_SECURE_NO_WARNINGS
    #include <bits/stdc++.h>
    using namespace std;
    int n, mod = 1e9 + 7;
    string s;
    int dp[10001][(1 << 10) + 2];
    int solve(int ind, int msk){
    	if (ind == n)
    		return 1;
    	int & ret = dp[ind][msk];
    	if (ret != -1)
    		return ret;
    	ret = 0;
    	if (1 << (s[ind] - '0')&msk)
    		ret = (ret + solve(ind + 1, (1 << (s[ind] - '0'))) % mod) % mod;
    	else{
    		ret = (ret + solve(ind + 1, (1 << (s[ind] - '0'))) % mod) % mod;
    		ret = (ret + solve(ind + 1, (1 << (s[ind] - '0') | msk)) % mod) % mod;
    	}
    	return ret;
    }
    int main()
    {
    	cin >> n >> s;
    	memset(dp, -1, sizeof dp);
    	cout << solve(1, 1 << (s[0] - '0')) % mod << endl;
    	return 0;
    }
