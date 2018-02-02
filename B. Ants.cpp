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

const int maxi =1000;
int arr[maxi][maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;

void dfs(int x,int y)
{
	// divide the ants into their directions
	int antsdiv = arr[x][y]/4;
	arr[x][y] -= 4*antsdiv;
	
	arr[x-1][y] +=antsdiv;
	if(arr[x-1][y]>=4)
	dfs(x-1,y);
	arr[x+1][y] += antsdiv;
	if(arr[x+1][y]>=4)
	dfs(x+1,y);
	arr[x][y-1] +=antsdiv;
	if(arr[x][y-1]>=4)
	dfs(x,y-1);
	arr[x][y+1] +=antsdiv;
	if(arr[x][y+1]>=4)
	dfs(x,y+1);

}

int main()
{
	jadu;
	cin>>n;
	arr[500][500] =n;
	dfs(500,500);
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		if(abs(x)>100 || abs(y)>100)
		{
			 cout<<"0\n";
			 continue;
		}
		cout<<arr[x+500][y+500]<<endl;
	}
	return 0;
	
}
