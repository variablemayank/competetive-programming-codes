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


const int N = 1 << 10;
const int K = N << 10;
long long a[K];
long long b[K];
int arr[N][N];
int n , m , k , p;
priority_queue < long long > pq;
long long ans = LLONG_MIN;
int main(){
    scanf("%d %d %d %d" , &n , &m , &k , &p);
    for(int i = 1 ; i <= n ; ++i){
        for(int j = 1 ; j <= m ; ++j){
            scanf("%d" , &arr[i][j]);
        }
    }
    for(int i = 1 ; i <= n ; ++i){
        long long sum = 0;
        for(int j = 1 ; j <= m ; ++j){
            sum += arr[i][j];
        }
        pq.push(sum);
    }
    for(int i = 1 ; i <= k ; ++i){
        a[i] = pq.top();
        pq.pop();
        pq.push(a[i] - m * p);
        a[i] += a[i - 1];
    }
    while(!pq.empty()){
        pq.pop();
    }
    for(int i = 1 ; i <= m ; ++i){
        long long sum = 0;
        for(int j = 1 ; j <= n ; ++j){
            sum += arr[j][i];
        }
        pq.push(sum);
    }
    for(int i = 1 ; i <= k ; ++i){
        b[i] = pq.top();
        pq.pop();
        pq.push(b[i] - n * p);
        b[i] += b[i - 1];
    }
    for(int i = 0 ; i <= k ; ++i){
        ans = max(ans , a[i] + b[k - i] - 1LL * i * (k - i) * p);
    }
    cout << ans;
}
