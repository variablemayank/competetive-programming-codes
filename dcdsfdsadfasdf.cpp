	    #include<bits/stdc++.h>
		using namespace std;
			
		#define jadu ios_base::sync_with_stdio(false);
		#define rep(i,a,b) for (int i = a; i <= b; i++)
		#define f first
		#define s second
		#define lelo(x) scanf("%d",&x);
		#define dedo(x) printf("%d",x); 	
		#define PB push_back
		#define MP make_pair
		#define sz(c)     (int)c.size()
		typedef long long ll;
		typedef vector<int> vi;
		typedef pair<int,int> pi;
		const int MOD = 1000000007;
		#define trace1(x)                cerr<<#x<<": "<<x<<endl
		#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
		#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
		#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
		#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
		#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
		template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
	//	template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%//mod; b/=2; a=(a*a)%mod; } return ans%mod; }
		 
		
		
		const ll MAXN=6000000;
		
		 
		using namespace std;
		 
		ll var[MAXN], dp[MAXN];
		ll ans;
		 
		int main()
		{
		    
		    
		    ll t, l, r, res = 0, i, j;
		 
		    scanf("%lld%lld%lld",&t,&l,&r);
		    var[0] = 1;
		    for (i = 1; i < MAXN; ++i) 
			{
			var[i] = var[i - 1] * t; 
			var[i] %= MOD;
			}
		 
		    for (i = 2; i <= r; ++i)
			{
		        ll p = 0;
		        for (j = 2; j * j <= i; ++j) 
				if (i % j == 0)
				{
					
		            p = (i / j) * j * (j - 1) / 2;
		            dp[i] = dp[i / j] + p;
		            dp[i] %= MOD;
		            break;
		        }
		        if (p == 0) 
				{
		            dp[i] = i * (i - 1) / 2;
		            dp[i] %= MOD;
		        }
		    }
		    ll now = 0;
		    for (i = l; i <= r; ++i) 
			{
		        res += (var[now] * dp[i]);
		        res %= MOD;
		        now++;
		    }
		   printf("%lld",res);
		    return 0;
		}
