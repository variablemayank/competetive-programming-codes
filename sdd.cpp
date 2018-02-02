#include<bits/stdc++.h>
using namespace std;

#define ll long long
bool compare(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
	return a.second>b.second;
}
int main()
{
	ios_base::sync_with_stdio(false);
	ll n,c;
	cin>>n>>c;
	vector< pair<ll,ll > > vec;
	for(ll i=0;i<c;i++)
	{
		ll u,v;
		cin>>u>>v;
		vec.push_back(make_pair(u,v));
	}
	stable_sort(vec.begin(),vec.end(),compare);
	long long sum =0,prod=0;
	for(ll i=0;i<c;i++)
	{
	  if(sum+vec[i].first <= n)
	  {
	  	sum += vec[i].first;
	  	prod += (vec[i].first *vec[i].second)%1000000007;
	  }
	  if(sum>vec[i].first)
	  {
	  	prod += ((n-sum)*vec[i].second)%1000000007;
	  	break;
	  }
	}
	cout<<prod%1000000007;
	return 0;
}
