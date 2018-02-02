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

const int maxi =1000000;
int arr[maxi];
//intbrr[maxi];
//intcrr[maxi];
int n,m,k,l,j;
ll dp[5002][5002];

int main()
{
	jadu;
    cin>>n>>k;
    
    for(int i=0;i<n;i++) cin>>arr[i];
    int a= n%k;
    int al = n/k+1; // first group
    int b=  k- n%k; 
    int bl = n/k; //second group
     
    sort(arr,arr+n);
    for(int  i=0;i<5002;i++)
    {
    	for(int j=0;j<5002;j++)
    	{
    		dp[i][j] = INT_MAX;
		}
	}
	
	dp[0][0] =0;
	
	for(int i=0;i<=a;i++)
	{
		for(int j=0;j<=b;j++)
		{
			if(i)
			{
				dp[i][j] = min(dp[i][j],dp[i-1][j]+arr[i*al+j*bl-1]-arr[(i-1)*al+j*bl]);
			}
			if(j)
			{
				dp[i][j] = min(dp[i][j],dp[i][j-1]+arr[i*al+j*bl-1] -arr[i*al+(j-1)*bl]);
			}
		}
	}
	cout<<dp[a][b]<<endl;
	return 0;
}
