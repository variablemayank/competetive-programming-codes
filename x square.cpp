#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MAX 1000000009
ll power(ll x,ll y);
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<power(26,(n+1)/2)<<"\n";
	}
}
ll power(ll a,ll b)
{
	ll res=1;
	while(b)
	{
		if(b%2)
		{
			res=res*a;
			res=res%MAX;
			
		}
		b/=2;
		a=a*a;
		a=a%MAX;
		

	}
	return res;
}
