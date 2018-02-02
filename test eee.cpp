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
typedef long long int ll;
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

ll arr[1000007];

int abstract(int x)
{
	if(x<0) return x*-1;
	 return x;
}

int main()
{
	jadu;
	int t;
	cin>>t;
	while(t--)
	{
	   //  c:
	     memset(arr,0,sizeof(arr));
	     int n,k;
	     cin>>n>>k;
	     ll  sum =0;
	     for(int i=0;i<n;i++)
	     cin>>arr[i],sum+=arr[i];
	     
	     ll  average = sum/n;
	    // trace2(average,sum);
	    int  flag =0;
	    if(sum%n!=0) 
	    {
	        cout<<"-1\n";
	        continue;
		}	
	    	for(int i=0;i<n;i++)
	    	{
	    		arr[i]-= average;
			}
			
	    	for(int i=0;i<k;i++)
	    	{
	    		 flag =0;
	    		for(int j=i;j<n;j+=k)
	    		{
	    			flag += arr[j];
				}
			    if(flag)
			    {
			    cout<<"-1\n";
			    break;
			    }
			}
			if(flag) continue;
			
			
			ll  ans =0;
			for(int i=0;i<k;i++)
			{
				for(int j=i;j<n;j+=k)
				{
					ans += abs(arr[j]);
				    arr[j+k] += arr[j];
				}
			}
			cout<<ans<<endl;
		}
		
		return 0;
	}
