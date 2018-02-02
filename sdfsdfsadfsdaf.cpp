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

struct star{
	int x,y,s;
};
int arr[105][105][11];
int sum[105][105][11];
int main() {
	int n,q,c,t,x1,x2,y1,y2;
	star st[100005];
	cin>>n>>q>>c;
	for(int i=0;i<n;i++)
	{
		cin>>st[i].x>>st[i].y>>st[i].s;
		for(int k=0;k<=c;k++)
		{
			arr[st[i].x][st[i].y][k]+=(st[i].s+k)%(c+1);
		}
	}
	for(int k=0;k<=c;k++)
		sum[0][0][k]=arr[0][0][k];
	for(int i=1;i<=100;i++)
	{
		for(int k=0;k<=c;k++)
		{
			sum[i][0][k]=arr[i][0][k]+sum[i-1][0][k];
		}
	}
	for(int j=1;j<=100;j++)
	{
		for(int k=0;k<=c;k++)
		{
			sum[0][j][k]=arr[0][j][k]+sum[0][j-1][k];
		}
	}
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=100;j++)
		{
			for(int k=0;k<=c;k++)
			{
				sum[i][j][k]=sum[i-1][j][k]+sum[i][j-1][k]-sum[i-1][j-1][k]+arr[i][j][k];
			}
		}
	}
	
	while(q--)
	{
		cin>>t>>x1>>y1>>x2>>y2;
		t=t%(c+1);
		int ans = sum[x2][y2][t]-sum[x2][y1-1][t]-sum[x1-1][y2][t]+sum[x1-1][y1-1][t];
		cout<<ans<<"\n";
	}
	return 0;
}
