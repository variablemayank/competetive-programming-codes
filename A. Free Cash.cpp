#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	map<pair<int,int>,int > mp;
	for(int i=0;i<t;i++)
	{
		int a,b;
		cin>>a>>b;
		mp[make_pair(a,b)]++;
	}
	int maxi =0;
	for(	map<pair<int,int>,int > ::iterator it = mp.begin();it!=mp.end();it++)
	{
	   maxi = max(it->second,maxi);
	}
	cout<<maxi<<endl;
}
