#include<bits./stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	vector<pair<int,string> > mp;
	int y;string x;
	for(int i=0;i<t;i++)
	{
		cin>>x>>y;
		mp.push_back(make_pair(-y,x));
	}
	sort(mp.begin(),mp.end());
	
	for(int i=0;i<t;i++)
	{
		cout<<mp[i].second<<" "<<-1*mp[i].first<<endl;
	}
	return 0;
	
}
