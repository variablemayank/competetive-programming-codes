	/* Template By Mayank Sharma
	fight_till_end  */
	#include<bits/stdc++.h>
	using namespace std;
	
	#define jadu ios_base::sync_with_stdio(false);
	#define REP(i,a,b) for (int i = a; i <= b; i++)
	#define F first
	#define S second
	
	#define PB push_back
	#define MP make_pair
	typedef long long ll;
	typedef vector<int> vi;
	typedef pair<int,int> pi;
    
    const int mod = 1000000007;
	const int maxi =1005;

	//int arr[maxi];
	//int brr[maxi];
	//int crr[maxi];
//	int n,m,k;

class KeysInBoxes 
{
	int dp[32][32];
public:
	string getAllKeys(int N, int M) 
	{
		
		int n,m;
		cin>>n>>m;
		
		memset(dp,0,sizeof(dp));
		dp[1][1] =1;
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				dp[i][j] = dp[i-1][j-1] +(i-1)*dp[i-1][j];
				
			}
		}
		long long a= 0;
		for(int i=1;i<=m;i++)
		{
			a+= dp[n][i];
		}
		long long b= 1;
		for(int i=1;i<=n;i++)
		{
			b= b*i;
		}
		long long d = __gcd(a,b);
		a/=d;
		b/=d;
		char s[50];
		sprintf(s,"%lld/%lld",a,b);
		/return s;
	}
};
