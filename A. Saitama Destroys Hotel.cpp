#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int,int> > vec;
	for(int i=0;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		vec.push_back(make_pair(u,v));
		
	}
	sort(vec.begin(),vec.end());
	reverse(vec.begin(),vec.end());
	
	int diff =0;
		diff+= k -vec[0].first;
		
			diff+= abs(diff-vec[0].second);
	for(int i=0;i<n-1;i++)
	{
	     diff+= vec[i].first -vec[i+1].first; 
		 diff += abs(diff-vec[i].second);
	}
	diff+= vec[n-2].first - vec[n-1].first;
	diff += vec[n-1].first;
	cout<<diff;
}
