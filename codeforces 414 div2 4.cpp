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
int rockiepiebaby(int val)
{
	if(val< 0) return -val;
	return val;
}
int gcdExtended(int a, int b, int &x, int &y)
{
    // Base Case
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b%a, a, x1, y1);
 
    // Update x and y using results of recursive
    // call
    x = y1 - (b/a) * x1;
    y = x1;
 
    return gcd;
}
int change(int f, int s)
{
	int pos = (f < 0) + (s < 0);
	f = rockiepiebaby(f);
	s= rockiepiebaby(s);
	if(pos == 1) return - (f / s);
	return (f + s - 1) / s;
}
 
bool check(int a, int b, int c, int & a1, int & a2, int &l) 
{
     
  //  if(a<0 )
  //  {
   //  a  = -a;
     
     
////	}
////	if(b<0)
//	{
	///	b = -1*b;
	//}
	l = gcdExtended(rockiepiebaby(a),rockiepiebaby(b), a1, a2);
	if (c % l != 0)
	{
		return false;
	}
	a1 *= c / l;
	a2 *= c / l;
	if (a < 0)   a1 *= -1;
	if (b < 0)   a2 *= -1;
	return true;
}
 
int main()
{
	int t;
			  	cin >> t;
	while(t--)
	{
		int x, y, p, q,var1,var2,var3,a1,a2;
		cin >> x >> y >> p >> q;
		if(x == 0 && y == 0)
		{
			printf("%d\n",q);
			continue;
		}
		var1 = p - q;
		var2  = p;
		var3 = x*q - y*p;
		if(!check(var1,var2,var3, n, m, k)) {
			printf("-1\n");
			continue;
		}
		var1 /= k;
		var2 /= k;
		int o;
		if(var1 == 0) o = change(-n, var2);
		else if(var2 == 0) o = change(m, var1);
		else o = max(change(-n, var2), change(m, var1));
		cout << n + m + o * (var2 - var1) << '\n';
	}
			    
}
