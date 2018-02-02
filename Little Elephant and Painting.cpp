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
int n,m,k,l,j;


int main()
{
		int t;
		scanf("%d",&t);
	    while(t--)
	    {
		  	ll n,c,k;
		  	scanf("%lld%lld%lld",&n,&c,&k);
		  	double dp[52][52][102] ={0};
		    for(int i=1;i<=n;i++)
		  	{
		  	   dp[0][i][1] =1;	
			}
		 
		    for(int i=1;i<=k;i++)
		    {
			 	int l,r;
			 	scanf("%d%d",&l,&r);
			 	for(int j=1;j<=n;j++)
			 	{
			 	    for(int k=0;k<c;k++)
				    {
				        if(j>=l && j<=r)
					    {
						    for(int col=0;col<c;col++)
							{
							  dp[i][j][(k*col)%c]+= (dp[i-1][j][k]/(2*c));	
							}
						    dp[i][j][k] += (dp[i-1][j][k]*0.5);	
					    }
					    else
					    {
					   	    dp[i][j][k] +=dp[i-1][j][k];
						}	
					}	
				}
			}
			 
			double ans =0;
			for(int i=1;i<=n;i++)
			{
			 	for(int j=0;j<c;j++)
			 	{
			 		ans += (j*dp[k][i][j]);
				}
			}
			printf("%.6f\n",ans);
	    }
	  
}
