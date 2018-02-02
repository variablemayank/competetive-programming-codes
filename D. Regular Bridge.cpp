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

const int maxi =3001;
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;
vector<pair<int,int> > ans;
int main()
{
     
     cin>>k;
     if(k%2==0) return cout<<"NO",0;
     
     for(int i=2;i<=k;i++)
     ans.push_back({1,i});
     
     for(int i=1;i<=k-1;i++)
     {
     	for(int j=2;j<=k;j++)
     	{
     	 ans.push_back({k+i,j});	
		}
	 }
	 
	 for(int i=1;i<=k-1;i+=2)
	 {
	 	ans.push_back({i+k,i+k+1});
	 }
	 
	 int  len =ans.size();
	 
	 for(int i=0;i<len;i++)
	 {
	 	pair<int,int> var = ans[i];
		ans.push_back({var.first+2*k-1,var.second+2*k-1});
	 }
	 
	 ans.push_back({1,2*k});
	 cout<<"YES\n";
	 cout<<4*k-2<<" "<<ans.size()<<endl;
	 for(int i=0;i<ans.size();i++)
	 {
	 	cout<<ans[i].first<<" "<<ans[i].second<<endl;
	 }
	 return 0;
}
