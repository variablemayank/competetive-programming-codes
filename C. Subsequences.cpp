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
//int brr[maxi];
//int crr[maxi];
ll n,m,k,l,j;
ll dp[15][1000005];

ll getsum(ll idx,ll x){
 ll res =0;
 for(;x>0;x-=x&-x){
 	res += dp[idx][x];
 	
 }	
 return res;
}

void update(ll idx,ll x,ll val){
	for(x++;x<=100005;x+= (x&-x)){
		dp[idx][x] += val;
	}
}
int main()
{
	cin>>n>>k;
		k++;
		
		for(ll i=0;i<n;i++) cin>>arr[i];
		
		update(1,arr[0],1);
		
		for(int i=1;i<n;i++){
			ll x= arr[i];
			update(1,x,1);
			for(ll j=1;j<k;j++){
				ll y= getsum(j,x);
				update(j+1,x,y);
			}
		}
	cout<<getsum(k,100005);
	return 0;
}
