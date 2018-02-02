#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll f(ll n)
{
	ll ans=n,fibo[]={0,1,1};
	while(true)
	{
		ll to_add = ((n-fibo[2])/fibo[1]);
		
		if(!to_add ) break;
		
		ans+=to_add;
		fibo[0] =fibo[1];
		fibo[1] =fibo[2];
		fibo[2]=(fibo[0]+fibo[1]);
	}
	return (ans);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll ans=0,n1=1,n2;
		while(n1<=n)
		{
			n2 = (n/(n/n1));
			ans+=(n2+1-n1)*f(n/n1);
			n1=n2+1;
		}
		cout<<ans<<endl;
	}
	return (0);
}
