#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,q,k;
	cin>>n>>q>>k;
	int arr[n+1];
	pair<int,int>p[q+1];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<q;i++)
	{
		int l,r;
		cin>>l>>r;
		p[i].first = l;
		p[i].second = r;
	}
	vector<int> soln;
	for(int i= 0;i<q;i++)
	{
		int l = p[i].first;
		int r = p[i].second;
		vector<int> first;
		vector<int >second;
		vector<int> ::iterator it;
		for(int i=l-1;i<r;i++)
		{
			vector<int> var;
			var.push_back(arr[i]);
			for(it = second.begin();it!= second.end();it++)
			{
				var.push_back( *it^ arr[i]);
			}
			second = var;
			for(it =var.begin();it!= var.end();it++)
			{
				first.push_back(*it);
			}
		}
		//cout<<first.size()<<endl;
		int count =0;
		for(auto &it:first)
		{
			if( it<k) count++;
		}
		soln.push_back(count);
	}
	for(int i=0;i<solna.size();i++)
	{
		cout<<soln[i]<<endl;
	}
	
}
