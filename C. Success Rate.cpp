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
ll x,y,p,q;
bool solve(ll value)
{
	ll dif1 = p*value-x;
	ll dif2 = q*value-y;
//	trace2(dif1,dif2);
	if(dif2<dif1) return false;
	if(dif1<0||dif2<0) return false;
	return true;
}
ll binarysearch(ll left,ll right)
{
	while(left<right)
	{
		ll mid = (left+right)>>1;
		if(solve(mid))
		{
			right = mid;
		}
		else
		{
			left = mid+1;
		}
	}
	return left;
}
int main()
{
			int t;
			lelo(t);
			while(t--)
			{
			
				scanf("%lld%lld%lld%lld",&x,&y,&p,&q);
	            ll ans = binarysearch(0,1e9);
	            ll ansnum = ans*p -x;
	            ll ansden = ans*q -y;
	            ansden -= ansnum;
	            ll total = ansden+ansnum;
	            if(ansnum>=0 && ansden>=0)
	            {
	            	printf("%lld\n",total);
	            	continue;
				}
				else printf("-1\n");
			}
			return 0;
}
