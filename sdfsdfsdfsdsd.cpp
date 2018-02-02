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

 
ll niz[100000];
bool bio[100000];
 
bool kriterij(pair<ll,int> a,pair<ll,int> b){
 
	if(a.first<b.first) return 1;
	else if(a.first==b.first)
		if(niz[a.second]>niz[b.second]) return 1;
 
	return 0;
}
 
int main(){
   jadu;
	vector< pair<ll,int> > v;
	ll n,k,l;
 
	int f;
	cin >> n >> f;
 
	for(int i=0; i<n; i++){
 
		cin >> k >> l;
 
		niz[i]=min(k,l);
 
		k*=2;
		ll sol=min(k,l);
 
		v.push_back(make_pair(sol,i));
	}
 
	int kolko=0;
	ll suma=0;
 
	sort(v.begin(),v.end(),kriterij);
 
	for(int i=v.size()-1; i>=0; i--){
 
		kolko++;
		suma+=v[i].first;
		bio[v[i].second]=1;
		if(kolko==f) break;
	}
 
	for(int i=0; i<n; i++) if(!bio[i]) suma+=niz[i];
 
	cout << suma << endl;
 
	return 0;
}
