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
vector<int>arr(maxi);
int brr[maxi];
int crr[maxi];
int n,m,k,l,j;

int solve()
{
	int count =0;
	int result =0;
	for(int i=0;i<n;i++)
	{
	     if(crr[i]>result && crr[i]<=m)
	     {
	     	result = crr[i];
		 }
	}
	return result;
}
void rotateLeft()
{
  int i, temp,temp1;
  temp = arr[0];
  temp1 = arr[n-1];
  
  for (i = 0; i < n-1; i++)
     arr[i+1] = brr[i];
  
  //adding first element as the last 
  arr[0] = temp1;
  for(int i=0;i<n;i++) brr[i] =arr[i];
}
int main()
{
        
        string s;
        scanf("%d%d%d",&n,&m,&k);
        for(int i=0;i<n;i++)
        {
        	cin>>arr[i];
        	brr[i] =arr[i];
		}
        cin>>s;
        vector<int> ans;
            crr[0] = arr[0];
        	for(int i=1;i<n;i++)
			{
				if(arr[i]==0)crr[i] =0;
				else
				crr[i] = crr[i-1]+arr[i];
			}
        for(int i=0;i<s.length();i++)
        {
        	if(s[i]=='?')
        	{
        	 int sol = solve();
        	 ans.push_back(sol);
        	
			}
			if(s[i]=='!')
			{
			rotateLeft();
			crr[0] = brr[0];
			for(int i=1;i<n;i++)
			{
				if(brr[i]==0)crr[i];
				else
				crr[i] = crr[i-1]+brr[i];
			}
			/// for(int i=0;i<n;i++) cout<<crr[i]<<" ";
        //	 cout<<endl;
			}
		}
		
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<endl;
		}
        
	    
}
