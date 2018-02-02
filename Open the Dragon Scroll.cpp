#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define MOD 1000000007
ll fast_exp(int base,int exp)
{
	ll res= 1;
	while(exp>0)
	{
		if(exp &1) res=(res*base) %MOD;
		base = (base*base)%MOD;
		exp/=2;
	}
	return res%MOD;
}
int main()
{
	int t; cin>>t;
	while(t--)
    {
    	int n,a,b,sum=0;
    	cin>>n>>a>>b;
    long long m,n;
    m = __builtin_popcount(a);
    n=  __builtnin_popcount
    long long p  = m+n;
    if(p<=a)
    {
    	for(long long i= a-1;i>=a-p;i)
	}
	}
}
