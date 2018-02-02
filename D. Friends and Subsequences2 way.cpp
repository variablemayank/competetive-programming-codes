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


const int maxi = (1<<20);
int arr[maxi];
int brr[maxi];
int fenwicka[maxi];
int fenwickb[maxi];
int lg[maxi];

int n;
int geta(int x)
{
	int  ans = -(1e9+1);
	while(x>0)
	{
		ans = max(ans,fenwicka[x]);
		x -= x&-x;
	}
	return ans;
}

int getb(int x)
{
	int ans = (1e9+1);
	while(x>0)
	{
		ans = min(ans,fenwickb[x]);
		x -= x&-x;
	}
	return ans;
}

void  updateA(int x,int val)
{
	
	while(x<=n)
	{
		fenwicka[x] = max(val,fenwicka[x]);
		x += x&-x;
	}
}

void updateB(int x,int val)
{
	while(x<n)
	{
		fenwickb[x] = min(val,fenwickb[x]);
		x += x&-x;
	}
	
}
int main()
{
	
	for(int i=2;i<=1e6;i++) 
	{
		lg[i] = lg[i/2] +1;
	}
	
	
    scanf("%d",&n);
    for(int i=1;i<=n;i++) cin>>arr[i],fenwicka[i]= -(1e9+1);
    for(int j=1;j<=n;j++) cin>>brr[j],fenwickb[j]= (1e9+1);
    
    
    long long ans = 0;
    
    
    for(int i=n;i;i--)
    {
    	updateA(i,arr[i]);
    	updateB(i,brr[i]);
        // i , i-1	
    	int l  =  i-1;
    	int r= i;
    	for(int p = 1<<lg[n-i+1]; p ; p>>=1)
    	{
    		// range p+l 
    		if(p+l <=n && geta(l+p)<getb(l+p)) l+=p;
    		if(p+r <=n && geta(r+p)<getb(r+p)) r+=p;
		}
		ans += (r-l);
	}
	
	cout<<ans<<endl;
	return 0;

}
