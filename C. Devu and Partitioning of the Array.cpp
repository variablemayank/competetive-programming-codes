#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,p,k;
	cin>>n>>k>>p;
	vector<int> vec[2];
	for(int i=0;i<n;i++)
	{
		int var;
		cin>>var;
		vec[var%2].push_back(var);
	}
	if(sizeof(vec[1])<k-p)
	{
		return cout<<"NO",0;
	}
	vector<vector<int> > ans(k);
	
	for(int i=0;i<k-p;i++)
	{
		ans[i].push_back(vec[1].back());
		vec[1].pop_back();
	}
	
	if(sizeof(vec[1])%2!=0)
	{
		return cout<<"NO",0;
	}
	if(sizeof(vec[0])%2!=0)
	{
		return cout<<"NO",0;
	}
	for(int i=k-p;i<k;i++)
	{
		if(!vec[0].empty())
		{
		    ans[i].push_back(vec[0].back());
			vec[0].pop_back();
		}
		else
		{
			for(int j =0;j<2;j++)
			{
				ans[j].push_back(vec[1].back());
				vec[1].pop_back();
			}
		}
	}
	
	for(int j=0;j<2;j++)
	{
		for(int i =0;i<sizeof(vec[j]);i++)
		{
			ans[0].push_back(vec[j][i]);
		}
	}
	
	cout<<"YES\n";
	for(int i=0;i<sizeof(ans);i++)
	{
		cout<<ans[i].size();
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
        puts(" ");
	}
	return 0;
}
