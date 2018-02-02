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

const int maxi =5555;


int arr[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;
int dp[maxi];

int minhash[maxi];
int maxhash[maxi];


int main()
{
    int n;
	cin>>n;
	
	memset(minhash,-1,sizeof(minhash));
	memset(maxhash,-1,sizeof(maxhash));
	memset(dp,0,sizeof(dp));
	
	for(int i=1;i<=n;++i){
		cin>>arr[i];
		if(minhash[arr[i]]==-1){
		   minhash[arr[i]] =i;
		}
		maxhash[arr[i]] =i;
	}
	
	for(int r=1;r<=n;++r){
		
		dp[r] = dp[r-1];
		int xore=0,range=r;
		for(int l =r;l>=1;--l){
			if(maxhash[arr[l]]>r){
				break;
			}
			if(maxhash[arr[l]]==l){
				trace3(maxhash[arr[l]],arr[l],l);
	            xore = xore^arr[l];
			}
			if(minhash[arr[l]]<range){
				trace3(minhash[arr[l]],arr[l],range);
				range = minhash[arr[l]];
			}
			if(l==range){
				trace2(l,range);
				dp[r] = max(dp[r],dp[l-1]+xore);
				range--;
			}
			trace2(l,r);
		}
	}
	cout<<dp[n];
	return 0;
}
