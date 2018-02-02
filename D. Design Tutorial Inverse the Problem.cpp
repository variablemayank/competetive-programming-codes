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

const ll maxi =2020;
//ll arr[maxi];
//ll brr[maxi];
//ll crr[maxi];
ll n,m,k,l,j;
ll dist[maxi][maxi];
ll parent[maxi];
ll ranki[maxi];
vector<pair<ll,pair<ll,ll> > >edges;
vector<pair<ll,ll> > tree[maxi];
bool ans;
const ll inf = ll(1e9);
void init(ll n)
{ 
for(ll i=0;i<n;i++)
{
	parent[i]=i;
	ranki[i] =1;
}
}

ll root(ll x)
{
	if(parent[x]==x) return x;
	return (parent[x]= root(parent[x]));
}

void connect(ll a,ll b)
{
    a = root(a);
    b = root(b);
    if(a==b)
    return ;
    if(ranki[a]>ranki[b])
    {
    	parent[b] = parent[a];
    	ranki[a]+= ranki[b];
	}
	if(ranki[a]<=ranki[b])
	{
		parent[a] = b;
		ranki[b]+= ranki[a];
	}
}

void dfs(ll p,ll x,ll r,ll d)
{
	if(dist[r][x] != d)
	{
		ans = false;
	}
	for(ll i=0;i<tree[x].size();i++)
	{
		 ll y = tree[x][i].first;
		 if(y!=p)
		 dfs(x,y,r,min(d+tree[x][i].second,inf));
	}
}

bool check()
{
	for(ll i=0;i<n;i++)
	{
		// diagonal elements 
		if(dist[i][i]!=0) return false;
	}
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(dist[i][j]==0) return false;
				if(dist[i][j]!=dist[j][i])return false;
			}
		}
	}
	
	for(ll i=0;i<n;i++)
	{
		for(ll j=i;j<n;j++)
		{
			edges.push_back(make_pair(dist[i][j],make_pair(i,j)));
			
		}
	}
	sort(edges.begin(),edges.end());
	//applying dst
	init(n);
	for(ll i=0;i<edges.size();i++)
	{
		ll a= edges[i].second.first;
		ll b=  edges[i].second.second;
		ll c= edges[i].first;
		if(root(a)!=root(b))
		{
			connect(a,b);
			tree[a].push_back(make_pair(b,c));
			tree[b].push_back(make_pair(a,c));
		}
	}
	ans = true;
    for(ll i=0;i<n;i++)
    dfs(-1,i,i,0);
    
    return ans;
} main()
{
	jadu;
     cin>>n;
     for(ll i =0;i<n;i++)
     for(ll j=0;j<n;j++) cin>>dist[i][j];
     
     bool ans = check();
     if(ans) cout<<"YES";
     else cout<<"NO";
     return 0;
	    
}
