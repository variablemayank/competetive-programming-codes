#include<bits/stdc++.h>
using namespace std;

const int mod =1000000007;
#define ll long long
#define sd(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define pd(n) printf("%d\n",n)
#define pl(n) printf("%lld\n",n)
#define PB push_back

ll fast_exp(ll base ,ll  exp)
{
	ll res =1;
	while(exp>0)
	{
		if(exp&1) res = (res*base)%mod;
		base  =(base*base)%mod;
		exp/=2;
		
	}
	return res%mod;
}
ll modinverse(ll a ,ll b)
{
	return fast_exp(a,b-2);
}
int main()
{
	ll t;
	sl(t);
	while(t--)
	{
		ll n;
		sl(n);
		ll arr[n];
		ll powi[n];
		for(int i=0;i<n;i++) sl(arr[i]);
		for(int i=0;i<n;i++) sl(powi[i]);
		
		ll sol=1;
		for(int i=0;i<n;i++)
		{
		     if(powi[i]==1)
		     {
		     sol = (sol*arr[i])%mod;
		     //cout<<sol<<endl;
		     }
		     else 
		     {
		     	ll p = powi[i];
		     	ll a = arr[i];
		        ll mudo = modinverse(a-1,mod);
		        ll multiply = ((fast_exp(a,p)-1) *a)%mod;
		        //cout<<multiply<<endl;
		       
			   sol = (((mudo*multiply)%mod)*sol)%mod;
			 }
			 
		//	cout<<sol<<endl;
	    }  
	      pl(sol);
	}
}
