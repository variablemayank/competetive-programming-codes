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
#define all(x)  x.begin(),x.end()
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

const int maxi =100000010;
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;

int BIT[maxi];

int getsum(int idx){
   int res =0;
   while(idx>0){
   	res+= BIT[idx];
   	idx -= idx&(-idx);
   }s
   return res;
}

void update(int idx,int val){
	for(idx;idx<=300005;idx+=idx&(-idx)){
		BIT[idx]+=val;
	}
}

int main()
{
	jadu;
	
	
	int t;
	cin>>t;
	
	while(t--){
		vector<pair<int,int> > inv;
	map<string,int> mp;

	memset(BIT,0,sizeof(BIT));
		cin>>n;
		for(int i=1;i<=n;i++){
			string s;
			cin>>s;
			mp[s] =i;
		}
		for(int i=1;i<=n;i++){
		    string s;
		    cin>>s;
		    k = mp[s];
		    inv.push_back(make_pair(k,i));
		}
		sort(all(inv));
		reverse(all(inv));
		ll ans =0;
		for(int i=0;i<sz(inv);i++){
			int var = inv[i].first;
			int idx = inv[i].second;
		//	trace3(var,idx,getsum(idx));
			ans += getsum(idx);
			update(idx,1);
		}
		cout<<ans<<endl;
	}
}
