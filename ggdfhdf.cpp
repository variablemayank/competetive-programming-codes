#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define Max 10000
int main()
{
	int t;
	ll a[Max];
	cin>>t;
	for(int i=0;i<t;i++) cin>>a[i];
	for(int i=0;i<t;i++)
	{
		ll m =ceil(min( -1 + sqrt(1 + 4*a[i]), -1 + sqrt(4*a[i])));
		cout<<m<<"\n";
	}
}

