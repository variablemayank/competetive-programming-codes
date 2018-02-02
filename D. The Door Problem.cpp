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
vector<int> graph[maxi];
vector<pair<int,int> > adj[100006];

void solve()
{
    for(int i=1;i<=n;i++)
	{
	  
	   	   int x = graph[i][0];
	   	   int y = graph[i][1];
	   	   
	       adj[x].push_back({y,arr[i]});
	       adj[y].push_back({x,arr[i]}); 
	}	
}
int cur[maxi];
bool visited[maxi];


int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>arr[i];
    
    for(int i=1;i<=m;i++)
    {
        int v;
        cin>>v;
        for(int j=0;j<v;j++)
        {
        	int k;
        	cin>>k;
        	graph[k].push_back(i);
		}
	}
	solve();
	memset(cur,-1,sizeof(cur));
	memset(visited,false,sizeof(visited));
	bool flag  = true;
	for(int i=1;i<=m;i++)
	{
		if(!visited[i] && adj[i].size())
		{
			cur[i] =0;
			visited[i] = true;
			queue<int> q;
			q.push(i);
			
			while(q.size())
			{
				int node = q.front();
				q.pop();
				
				for(auto p :adj[node])
				{
					int co = cur[node];
					
					if(p.second==0)
					{
						co^=1;
					}
					
					if(visited[p.first] && cur[p.first]!=co)
					{
						flag = false;
					}
					
					if(!visited[p.first])
					{
						cur[p.first] = co;
						visited[p.first] = true;
						q.push(p.first);
					}
				}
			}
		}
	}
	
	if(flag ==false) cout<<"NO\n";
	else cout<<"YES\n";
	return 0;
}
