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

//const int maxi =100005;
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];


int dp[2555][2555];
vector<int> arr[2555];
vector<int> brr[2555];


int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			arr[i].clear();
			brr[i].clear();
		}
		
		for(int i=0;i<n;i++)
		{
			int var; 
			cin>>var;
			
			for(int j=0;j<var;j++)
			{
			int p;
			cin>>p;
			arr[i].push_back(p);
		    }
		}
	
		memset(dp,0,sizeof(dp));
		for(int i=0;i<n;i++) sort(arr[i].begin(),arr[i].end());
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<arr[i].size();j++)
			{
				dp[i][arr[i][j]-1] =1;
			}
		}
		
		long ans = (n*(n-1))/2;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<k;j++)
			{
				if(dp[i][j]==0) brr[i].push_back(j);
			}
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<brr[i].size();j++)
			{
				for(int l =i+1;l<n;l++)
				{
					if(dp[l][brr[i][j]]==0) 
					{
								ans--;
					break;
					}
			
				}
			}
		}
	    ans = max(long (0),ans);
	    cout<<ans<<endl;
	}
	return 0;
	
}
