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

const int maxn = 2000005;
int arr[maxn];
int brr[maxn];
//int crr[maxi];

int main()
{
	
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
	for(int j=1;j<=n;j++) scanf("%d",&brr[j]);
	
	
	deque<int> maxi;
	deque<int> mini;
	
	long long  ans =0;
	for(int i=1,j=1;i<=n;i++)
	{
		// if in the current for maxi the current is greater than previous one 
		//so pop_back();
		while(!maxi.empty() and arr[maxi.back()]<=arr[i])
		{
			maxi.pop_back();
		}
		while(!mini.empty() and brr[mini.back()]>=brr[i])
		{
			mini.pop_back();
		}
		maxi.push_back(i);
		mini.push_back(i);
		
		while(j<=i and arr[maxi.front()] -brr[mini.front()]>0 )
		{
			j++;
			
			while(!maxi.empty() && maxi.front()<j ) maxi.pop_front();
			while(!mini.empty() && mini.front()<j)  mini.pop_front();
			
 		}
 		if(!maxi.empty() and !mini.empty() && arr[maxi.front()]==brr[mini.front()])
 		ans += min(maxi.front(),mini.front()) - j+1;
 		
	}
	printf("%lld",ans);
	return 0;
}
