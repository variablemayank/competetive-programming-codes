#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	return (b==0?a:gcd(b,a%b));
}
long long lcm(long long  a,long long  b)
{
	return((a ) *b/gcd(a,b));
}
int main()
{
	int n;
	cin>>n;
	if(n==1)
	cout<<"1";
	else if(n==2)
	cout<<"2";
	else
	{
	long long ans = lcm(n,lcm(n-1,n-3));
	long long  s= max(ans,max(lcm(n,lcm(n-1,n-2)) ,lcm(n-1,lcm(n-2,n-3))));
	cout<<s;
    }
}
