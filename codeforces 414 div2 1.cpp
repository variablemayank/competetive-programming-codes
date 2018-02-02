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
#include<bits/stdc++.h>
using namespace std;
 
	struct solve
	{
	int f,s;
	};
	 
	bool compare(solve p, solve q)
	{
	return p.f>q.s;
	}
	
	
	int main()
	{
			int n;
			cin>>n;
			solve arr[n+1];
			
			solve brr[n+1];
			
			for(int i=0;i<n;++i)
			{
				
			cin>>arr[i].f>>arr[i].s;
			
			brr[i].f=arr[i].f;brr[i].s=arr[i].s;
			
			
			}
			int check1=0;
			
			
			for(int i=0;i<n;++i)
			{
				
			if(arr[i].f!=arr[i].s)
			{
			  check1=1;break;
			}
			
			}
			if(check1)
			{
			
			cout<<"rated\n";
			return 0;
			}
			
			sort(arr,arr+n,compare);
			
			int check2=0;
			
			for(int i=0;i<n;i++)
			{
				if(brr[i].f>arr[i].f)
				{
				  check2=1;break;
				}
			}
			if(check2 && (!check1))
			{
			cout<<"unrated\n";return 0;
			}
			if((!check2)&& (!check1))
			{
			
			cout<<"maybe\n";return 0;
			}
			return 0;
	}
