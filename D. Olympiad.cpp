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
#define all(x) x.begin(),x.end()
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
vector<int> arr(maxi);
vector<int> brr(maxi);
//int crr[maxi];
int n,m,k,l,j;


int main()
{
	jadu;
	int n,x;
    cin>>n;
    cin>>x;
    vector<int> A(n), B(n);
    for(int i = 0; i < n; i++)
        cin>>A[i];
    for(int i = 0; i < n; i++)
        cin>>B[i];
    sort(all(A));
    sort(all(B));
    reverse(all(A));
    reverse(all(B));
    int best = 1;
    int worst = 0;
    int L = 0;
    int R = 0;
    while(R < n && (A[L] + B[R]) >= x)
        R += 1;
    R -= 1;
    while(R >= 0)
    {
        while(R >= 0 && A[L] + B[R] < x)
        {
            R -= 1;
        }
        if(R < 0) break;
        worst += 1;
        L += 1;
        R -= 1;
    }
    printf("%d %d\n", best , worst);
      return 0;
}
  
