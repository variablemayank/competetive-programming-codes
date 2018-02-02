#include"bits/stdc++.h"
using namespace std;

const int mod = 1000000007;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int ,int> > vec;
	for(int i=0;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		vec.push_back({u,v});
	}
//	sort(vec.rbegin(),vec.rend());
	long long unsigned sum=0; 
	int  down =0;
	for(int current =1; current <n;)
	{
		sum+=  vec[current].second *(vec[current].first -vec[down].first );
		if(sum>= mod)
		sum%= mod;
		
		current++;
		if(k>1)
		{ 
		 k--;
		 down  =current;
		 current++;
		}
	}
	cout<<sum<<endl;
}

