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
const int mod = 1000000007;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }

const int maxi =100005;
int arr[maxi];
//intbrr[maxi];
//intcrr[maxi];
int n,m,k,l,j;
vector<long long > vec[5];
long long dp[300005];
long long data[300005][2];

void solve()
{
	if(!vec[1].empty())
	{
		dp[1] = vec[1][0];
		data[1][0] =
		1;
		data[1][1] =0;
	}
	
	for(int i=2;i<=300000;i++)
	{
		dp[i] = dp[i-1];
	    data[i][0] = data[i-1][0];
	    data[i][1] = data[i-1][1];
	    
	    if(data[i-1][0]< vec[1].size())
	    {
	    	if(dp[i]<dp[i-1] + vec[1][data[i-1][0]])
	    	{
	    		
		    	dp[i] = dp[i-1] + vec[1][data[i-1][0]];
		    	data[i][0] = data[i-1][0] +1;
		        data[i][1] = data[i-1][1];
		    }
		}
		
		if(data[i-2][1] < vec[2].size())
		{
			if(dp[i]<dp[i-2]+ vec[2][data[i-2][1]])
			{
				dp[i] = dp[i-2] + vec[2][data[i-2][1]];
				data[i][0] = data[i-2][0];
				data[i][1] = data[i-2][1]+1;
			}
		}
	}

}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
    	int w,c;
    	scanf("%d%d",&w,&c);
    	vec[w].push_back(c);
	}
	
	for(int i=1;i<=3;i++)
	{
		sort(vec[i].begin(),vec[i].end());
		reverse(vec[i].begin(),vec[i].end());
	}
	
	int weigh = m;
	long long ans =0,sum =0;
	
	solve();
	for(int i=0;i<=vec[3].size();i++)
    {
    	if(i)
    	{
    		sum += vec[3][i-1];
    		weigh -=3;
		}
		
		if(weigh>=0)
		{
			ans = max(ans,sum+dp[weigh]);
		}
		
	}
	printf("%lld\n",ans);
	return 0;
  
}
