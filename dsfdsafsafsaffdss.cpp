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
	typedef long long int  ll ;
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
	
	ll fast_exp(ll base, ll exp) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%mod;
       base=(base*base)%mod;
       exp/=2;
    }
    return res%mod;
}
	int arr[501][501];
	int main()
	{
	  ll   n,m,k;
	  cin>>n>>m>>k;
	  ll sum =0;
	  for(int i=0;i<n;i++)
	  {
	  	for(int j=0;j<m;j++)
	  	{
	  		cin>>arr[i][j];
	  		sum = (sum+arr[i][j])%mod;
		}
	  }
	  ll sum1=0;
	  for(int i=1;i<k;i++)
	  {
	   ll var  = sum *fast_exp((n+m+1),i);
	   sum1=(sum1+var)%mod;
      }
      //var = (var*sum)%mod;
	  for(int i=0;i<n;i++)
	  {
	  	for(int j=0;j<m;j++)
	  	{
	  		cout<<arr[i][j]+sum1<<" ";
		  }
		  cout<<endl;
	  }
	}
