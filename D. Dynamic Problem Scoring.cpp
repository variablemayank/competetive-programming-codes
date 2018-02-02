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
int freq[122];
int arr[122][6];
int range(int x,int y)
{
	if(2*x>y) return 500;
	if(4*x>y) return 1000;
	if(8*x>y) return 1500;
	if(16*x>y) return 2000;
	if(32*x>y) return 2500;
	return 3000;
 }
int check(int var)
{
	ll sum1 =0;
	ll sum2 =0;
	
	    for(int i=1;i<=5;i++)
	    {
	    	if(arr[1][i]==-1)
	    	{
	    		if(arr[2][i]>=0)
	    		{
	    			sum2+= range(freq[i],n+var) *(250-arr[2][i]);
	    			continue;
				}
				
			}
			if(arr[1][i]>=0)
			{
				if(arr[2][i]==-1)
				{
					sum1+= range(freq[i],n+var)*(250-arr[1][i]);
					continue;
				}
			}
			if(arr[1][i]<arr[2][i])
			{
				 sum1 += range(freq[i],var+n) *(250-arr[1][i]);
				 sum2 += range(freq[i],var+n) *(250-arr[2][i]);
			}
			if(arr[1][i]>arr[2][i])
			{
				sum1 += range(freq[i]+var,n+var)*(250-arr[1][i]);
				sum2 += range(freq[i]+var,n+var)*(250-arr[2][i]);
			}
		}
		return (sum1>sum2)?true:false;
}

int main()
{
	    scanf("%d",&n);
	   
	    for(int i=0;i<122;i++) freq[i] =0;
	    
	    
	    for(int  i=1;i<=n;i++)
	    {
	        for(int j=1;j<=5;j++)
			{
			scanf("%d",&arr[i][j]);	
			if(arr[i][j]>=0) ++freq[j];
			}	
		}
		for(int i=0;i<=10000;i++)
		{
			if(check(i)==true)
			{
				printf("%d\n",i);
				return 0;
			}
		}
        printf("-1\n");
        return 0;
		
		    
}
