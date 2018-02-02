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

const int maxi =300005;
int arr[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;
set<pair<int,int> > var,temp;

vector<int> vec[maxi];

void solve()
{
	     for(auto i :temp)
	     var.insert(i);
	     
	     temp.clear();
	     int k;
	     cin>>k;
	     for(int i=1;i<=k;i++)
	     {
	     	int v;
	     	cin>>v;
	     	if(vec[v].size()==0) continue;
	     	temp.insert(make_pair(vec[v].back(),v));
	     	var.erase({vec[v].back(),v});
		 }
		 if(var.size()==0)
		 {
		 	cout<<"0 0 \n";
		   return;	
		 }
		 auto it = var.end();
		 it--;
		 int req = 0;
		 int winner = it->second;
		 if(it!=var.begin())
		 {
		 	it--;
		 	req = (it->first);
		 }
		 int post = upper_bound(vec[winner].begin(),vec[winner].end(),req)-vec[winner].begin();
         cout<<winner<<" "<<vec[winner][post]<<endl;
}
int main()
{
	jadu;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	int u,v;
    	cin>>u>>v;
        vec[u].push_back(v);
			
	}
	for(int i=0;i<maxi;i++)
	{
		if(vec[i].size()==0) continue;
		sort(vec[i].begin(),vec[i].end());
	    var.insert(make_pair(vec[i].back(),i));
	//	trace1(vec[i].back());
	}
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	
	return 0;
	
  
}
