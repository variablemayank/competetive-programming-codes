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
#define svar2(c)     (int)c.sivar2e()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int mod = 1000000007;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, var2)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#var2<<": "<<var2<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }

const int maxi =20004;
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;

bool vis[maxi];
bool memo[maxi];
int s,x,y;
void fun(int b){
memset(vis,0,sizeof vis);
int it=(b/50)%475;
for(int i=0; i<25; i++){
it=(it*96+42)%475;
vis[26+it]=1;
  }
}

int solve(int a){
fun(a);
if(vis[s]&&a>x){return 0;}
int cnt1=solve(a+100)+1;
int cnt2=solve(a-50);
return min(cnt1,cnt2);
}
int main(){
scanf("%d%d%d",&s,&y,&x);
int ans=0;
ans+=solve(y);
printf("%d",ans);
return 0;
}
	    

