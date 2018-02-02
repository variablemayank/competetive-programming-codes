#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define all(x) x.begin(),x.end()
	vector<ll> v;
int main()
{
	ll n,k;

	scanf("%lld%lld",&n,&k);
	v.resize(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(all(v));
	ll sum=0,count=0;
	for(int i=0;i<n;i++)
	{
	  sum += v[i];
	  if(sum<=k) count++; 
	  else break;
	}
	cout<<count<<endl;
}
