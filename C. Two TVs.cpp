#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	//set<pair<int ,int > > s;
	vector<pair<int,int > > vec;
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		vec.push_back(make_pair(a,1));
		vec.push_back(make_pair(b+1,-1));
	}
	sort(vec.begin(),vec.end());
	
	auto sum =0;
	for(int i=0;i<vec.size();i++)
	{
		sum += vec[i].second;
		
		if(sum > 2)
		{
			return cout<<"NO",0;
		}
	}
	cout<<"YES";
	return 0;
	
	
}
