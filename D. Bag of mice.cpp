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

const int maxi =3001;
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;
map<pi,double> dp;
double solve(int w,int b)
{ 
     pi v = make_pair(w,b);
	 if(w<=0) return dp[v]=0;
	 if(b<=0)
	 {
	 	return dp[v] =1;
	 }
	 if(dp.find(v)!=dp.end())
	 {
	 	return dp[v];
	 }
	 double ret = w*1.0/(w+b),pr =b*1.0/(w+b)*(b-1)/(w+b-1);
	 b-=2;
	 if(pr>1e-15) ret+= pr*((solve(w,b-1)*b/(w+b))+solve(w-1,b)*w/(w+b));
	 return dp[v] = ret;
}
int main()
{
     int w,b;
     cin>>w>>b;
     cout<<fixed<<setprecision(9)<<solve(w,b);	    
}
