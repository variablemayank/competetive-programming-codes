#include<bits/stdc++.h>
using namespace std;
	
#define jadu ios_base::sync_with_stdio(false);
#define rep(i,a,b) for (ll i = a; i <= b; i++)
#define f first
#define s second
#define lelo(x) scanf("%d",&x);
#define dedo(x) prllf("%d",x); 	
#define PB push_back
#define MP make_pair
#define sz(c)     (ll)c.size()
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
const ll mod = 1000000007;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }

const ll maxi =100005;
ll arr[maxi];
//ll brr[maxi];
//ll crr[maxi];
ll n,m,k,l,j;


int  main()
{
	jadu;
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,q;
    	cin>>n>>q;
    	
    	
    	deque<ll>arr;
    	
    	for(ll i=0;i<n;i++)
    	{
    		ll var;
    		cin>>var;
    		arr.PB(var);
		}
		
		sort(arr.begin(),arr.end());
		
		while(q--)
		{
			deque<ll> ans= arr;
		
			
			ll count =0;
			ll var;
			cin>>var;
			
            for(deque<ll>::iterator it= ans.end() ;it!=ans.begin();it--)
            {
            	if(ans.back()>=var)
            	{
            		count++;
            		ans.pop_back();
				}
				else
				{
					ll diff =  var - ans.back();
					while(diff--)
					{
						if(!ans.empty())
						{
							ans.pop_front();
							ans.back()++;
						}
						else
						break;
					}
				}
				
			}
			cout<<count<<endl;
			
            
		}
	}
	return 0;
  
}
