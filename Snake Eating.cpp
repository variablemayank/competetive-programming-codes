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
int cum[maxi];
int index[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;

int solve(int var)
{
     int maxi = cum[var];
     int idx = index[var]-1;
     trace2(maxi,idx);
     
     int left =0,dist;
     while(left<=idx)
     {
     	dist = var- arr[idx];
     	left += dist;
     	if(left<=idx)
     	{
     		 maxi++;
     		 idx-=1;
		}
	 }
	 return maxi;
     
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	int q;
    	scanf("%d%d",&n,&q);
    	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    	
    	sort(arr,arr+n);
    	
    
    	for(int i=0;i<n;i++)
    	{
    		index[arr[i]] =i;
		}
		
		int count =0;
		cum[arr[0]] =0;
		for(int i=1;i<n;i++)
		{
		     if(arr[i-1]<arr[i])
		     {
		     	count++;
		     	cum[arr[i]] = count;
			 }
			 if(arr[i-1]==arr[i])
			 {
			    cum[arr[i]] = count;
			 }
		}
		for(int i=0;i<n;i++) 
		{
			trace1(arr[i]);
			trace1(cum[arr[i]]);
		}
		vector<int> vec;
    //	scanf("%d",&q);
		while(q--)
		{
			int var;
			scanf("%d",&var);
			int sol = solve(var);
			vec.push_back(sol);
		}
		
	}
}
