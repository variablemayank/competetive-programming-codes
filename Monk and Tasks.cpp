#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[100005];

bool comp(pair<int,int> const &a,pair<int,int> const &b)
{
	return a.second<b.second;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,val,count;
		cin>>n;
		vector<pair<ll,ll> > vp;
		for(int i=0;i<n;i++)
		{
			cin>>val;
			count = __builtin_popcountll(val);
			//cout<<count<<endl;
			vp.push_back(make_pair(val,count));
		}
		stable_sort(vp.begin(),vp.end(),comp);
		for(int i=0;i<vp.size();i++) cout<<vp[i].first<<" ";
		cout<<endl;
		
	}
	
	return 0;
}
