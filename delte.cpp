#include<bits/stdc++.h>
using namespace std;

typedef long long  ll;
int main()
{
	ios_base::sync_with_stdio(false);
	ll n,k;
	cin>>n>>k;
	ll l=1;
	for(int i=0;i<n;i++)
	{
		ll a;
		cin>>a;
		a  = __gcd(a,k);
		l = (ll)a*l / __gcd(a,l);
	//	cout<<l<<endl;
	}
	if(k==l) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}
