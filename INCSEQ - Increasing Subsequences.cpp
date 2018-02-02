#include<bits/stdc++.h>
using namespace std;
	
#define jadu ios_base::sync_with_stdio(false);
#define rep(i,a,b) for (ll  i = a; i <= b; i++)
#define f first
#define s second
#define lelo(x) scanf("%d",&x);
#define dedo(x) prll f("%d",x); 	
#define PB push_back
#define MP make_pair
#define sz(c)     (ll )c.size()
typedef long long ll;
typedef vector<ll > vi;
typedef pair<ll ,ll > pi;
const ll  mod = 5000000;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }

const ll  maxi =100005;
//ll  arr[maxi];
//ll  brr[maxi];
//ll  crr[maxi];
ll  n,m,k,l,j;
ll   BIT[15][1000005];
ll getsum(ll *b,ll idx)
{
	ll  res =0;
	 while(idx>=0){
	     res+= b[idx];
	    // if(res>=mod)  res-=mod;
	     idx = (idx&(idx+1))-1;
	 }
	 return res;
}

void update(ll  *b,ll  idx,ll  val)
{
	while(idx<100006)
	{
		b[idx]+= val;
	//	if(b[idx]>=mod) b[idx]-=mod;
		idx |= idx+1; 
	}
}
 main()
{
     cin>>n>>k;
     k++;
	 while(n--){
	 	cin>>m;
	 	update(BIT[1],m,1);
	 //	trace3(BIT[1],m,1);
	 	for(ll  i=2;i<=k;i++){
	 	//	trace3(BIT[i],m,getsum(BIT[i-1],m-1));
	 		update(BIT[i],m,getsum(BIT[i-1],m-1));
	 		
		 }
	 }
	 cout<<(getsum(BIT[k],100005));	
}
