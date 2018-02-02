#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll lcm(ll a,ll b)
{
	return (a*b)/__gcd(a,b);
}
int main()
{
	ios_base::sync_with_stdio(false);
   ll n,a,b,p,q,sum=0;
   cin>>n>>a>>b>>p>>q;
    sum +=  p*(n/a);
    sum+= q*(n/b);
    sum -=  min(p,q)*(n/lcm(a,b));
   
   cout<<sum;
}
