#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
 #include<bits/stdc++.h>
 
/*******  All Required define Pre-Processors and typedef Constants *******/
#define SCD(t) scanf("%d",&t)
#define SCLD(t) scanf("%ld",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCC(t) scanf("%c",&t)
#define SCS(t) scanf("%s",t)
#define SCF(t) scanf("%f",&t)
#define SCLF(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()

		
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


const int mod = 1000000007;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }
using namespace std;

vector<long long> b(200005);
vector<long long> shop;
long long pre[200005];
long long ans = -1;
void check(long long w,long long m,long long k,long long n){
 
    long long ch = 0;
    long long i;
    long long j = 0;
    long long item = 0;
    for(i=0;i<w;i++)
	{
        if(item==0)
            ch+=(shop[i]);
        else
            ch+=(shop[i]-shop[i-1])*(item*k);
        item++;
    }
    ans = ch;
   //cout<<ans<<"\n";
    for(i=w;i<n;i++){
        ch-=shop[i-w];
        //cout<<ch<<"\n";
        long long p = pre[i-1]-pre[i-w];
        //cout<<p<<"\n";
        ch-=(p*k);
        //cout<<ch<<"\n";
        ch+=shop[i-w+1];
        //cout<<ch<<"\n";       
        ch+=(shop[i]-shop[i-1])*(k*(m-1));
        //cout<<ch<<"\n";
        ans = min(ans,ch);
        //cout<<ans<<"\n";
    }
    //return 1;
}
void minimumTime(long long n,long long m, long long k) 
{
    check(m,m,k,shop.size());
}
 
int main() 
{
    long long n;
    long long m;
    long long k;
    cin >> n >> m >> k;
 
    for(long long b_i = 0; b_i < n; b_i++)
	{
    	
       cin >> b[b_i];
        if(b[b_i]==1)
            shop.push_back(b_i);
 
    }
    pre[0]=0;
    for(long long i=1;i<shop.size();i++)
	{
        pre[i] = shop[i]-shop[i-1]+pre[i-1];
    }
    if(shop.size()<m)
    {   
        cout<<"-1\n";
        return 0;
    }
    minimumTime(n, m, k);
    cout << ans << endl;
    return 0;
}
 
