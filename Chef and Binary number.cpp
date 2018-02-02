#include <bits/stdc++.h>
using namespace std;
 
#define ll unsigned long long 
const ll MAX = 10000007;
const ll MOD = 1000000007;

ll f[MAX] = {0};
 
ll fast_exp(ll base, ll exp)
{
	ll res =1;
	while(exp>0)
	{
		if(exp%2==1) res=(res*base)%MOD;
		base = (base*base)%MOD;
		exp/=2;
	}
	return res%MOD;
}
ll fib(ll n)
{
   
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
 
    if (f[n])
        return f[n];
 
    ll k = (n & 1)? (n+1)/2 : n/2;
 
    
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);
 
    return f[n]%MOD;
}
 
 
ll main()
{
    
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	//cout<<fast_exp(2,n)<<endl;
    //	cout<<fib(n+2)<<endl;
    	ll soln = (fast_exp(2,n) - (fib(n+2)))%MOD;
    	cout<<soln<<endl;
	}
    return 0;
}
