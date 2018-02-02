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
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];



vector<int> graph[maxi];
bool color[maxi];
int cnt1 =1;
int cnt2=0;
bool ok =1;
bool visited[maxi];

void dfs(int u)
{
	for(int i=0;i<graph[u].size();i++)
	{
		if(visited[graph[u][i]])
		{
			if(color[u] == color[graph[u][i]])
			{
				ok =0;
				return;
				
			}
		}
		else
		{
			visited[graph[u][i]] = 1;
			color[graph[u][i]] = color[u]^1;
			cnt1 += color[graph[u][i]];
			cnt2 += color[u];
			dfs(graph[u][i]);
		}
	}
}
int main() 
{
 	 int n,m;
	 cin>>n>>m;
	 for(int i=1;i<=m;i++)
	 {
	  int u,v;
	  cin>>u>>v;
	  graph[u].push_back(v);
	  graph[v].push_back(u);
     }
	 if(m==0)
	 {
	 	  cout<<"3 "<<(ll)n*(n-1)*(n-2)/6;
	 }
	 else
	 {
	 
		 int check =0;
		 for(int i=1;i<=n;i++)
		 {
		    check = max((int)check,(int)graph[i].size());
				
		 }  
		 if(check ==1)
		 {
		 	cout<<"2 "<<1LL*m*(n-2);
	     } 	
	     else
	     {
	     	long long int ans =0;
	     	for(int i=1;i<=n;i++)
	     	{
	     	    if(!visited[i])
			    {
			   	 visited[i] =1;
			   	 color[i] =1;
			   	 cnt1 =1;
			   	 cnt2 =0;
			   	 dfs(i);
			   	 ans+= (ll)cnt1 * (cnt1-1)/2;
				 ans+= (ll)cnt2 * (cnt2-1)/2;
				  
				}	
			}
			if(ok)
			{
				cout<<"1 "<<(ll)ans<<endl;
			}
			else
			{
				cout<<"0 1";
			}
		 }
     }
     return 0;
}
