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
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;
ll dist[maxi];
ll high[maxi];

int main()
{
     cin>>n>>m;
     for(int i=1;i<=m;i++) 
     cin>>dist[i]>>high[i];
     
     ll ans  = high[1]+dist[1] -1;
     ans = max(ans,high[m]+n-dist[m]);
     for(int i=2;i<=m;i++)
     {
     	int diff = dist[i] - dist[i-1];
     	diff-= abs(high[i]-high[i-1]);
     	if(diff<0)
     	{
     	 cout<<"IMPOSSIBLE\n";
		  return 0;	
		}
		diff>>=1;
		ans = max(ans,max(high[i]+diff,high[i-1]+diff));
		
	 }
	 cout<<ans<<endl;
	 return 0;
	    
}
