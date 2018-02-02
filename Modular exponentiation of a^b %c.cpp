#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll solve(ll a,ll b,ll c)
{
	ll ans =1;
	while(b!=0)
	{
		if(b%2==1)
		{
			ans = ans*a;
			ans =ans%c;
		}
		a =a*a;  
		a =a%c;
		b=b/2;      //remove the rightmost binary from the power b
	}
	return ans;
}
int main()
{
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cout<<"Enter the value of a,b,c\n"; 
		cin>>a>>b>>c;
		long long s = solve(a,b,c);
		cout<<"The a^b %c is "<<s<<endl;
	}
	return 0;
	//bye bye
}
