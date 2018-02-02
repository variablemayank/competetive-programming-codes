#include <bits/stdc++.h>
 
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

const int maxi =3001;
//int arr[maxi];
//int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;
int main()
{
	int t;
	cin>>t;
	 while(t--)
   {
   	long long i , j  , p ,  x , y , p1 , t , q , ans , q1,var2,var1 ;
       cin >> x >> y  >> p >> q ;
       if(q==p && x!=y) cout<<-1<<endl;
       else if(p==0 && x>0) cout<<-1<<endl;
       else if(p==0 && x==0) cout<<0<<endl;
       else
       {
           var2=y/q;var1=x/q;
           i=max(var2,var1);p1=0;q1=0;var2=i;var1=1;
           i=max(var2,var1);
           while( p1<x || q1<y || p1-x>q1-y)
           {
               p1=p*i;
               q1=q*i;
               i++;
 
           }
           ans=q1-y;
           cout<<ans<<endl;
 
       }
 
   }
 
    return 0;
}
  
