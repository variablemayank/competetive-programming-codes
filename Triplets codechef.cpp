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


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		vector<ll> arr(x);
		vector<ll> brr(y);
		vector<ll> crr(z);
		
		for(int i=0;i<x;i++)
		cin>>arr[i];
		for(int i=0;i<y;i++)
		cin>>brr[i];
		for(int i=0;i<z;i++)
		cin>>crr[i];
		
		sort(arr.begin(),arr.end());
		sort(brr.begin(),brr.end());
		sort(crr.begin(),crr.end());
		
		vector<ll> sumx(x+1,0);
		vector<ll> sumz(z+1,0);
	    ll temp =0;
		for(int i=1;i<=x;i++)
		{
			sumx[i]  = ( temp+ arr[i-1] ) % mod;
			temp = sumx[i]%mod;
		}
		//cout<<sumx[2];
		temp=0;
		for(int i=1;i<=z;i++)
		{
			sumz[i] = ( temp+ crr[i-1] ) % mod;
			temp = sumz[i]%mod;
		}
		
		ll count =0;
		ll sum1 =0;
		ll sum2 =0;
		ll sum =0;
		for(int i=0;i<y;i++)
		{
			ll low = (upper_bound(arr.begin(),arr.end(),brr[i]))-arr.begin();
			ll low1 = (upper_bound(crr.begin(),crr.end(),brr[i]))-crr.begin();
			sum1 = (sumx[low]+(low*brr[i])%mod)%mod;
			sum2 = (sumz[low1]+(low1*brr[i])%mod)%mod;
			sum  = (sum+(sum1*sum2)%mod)%mod;
		}
		cout<<sum%mod<<endl;
		
	}
	return 0;
}
