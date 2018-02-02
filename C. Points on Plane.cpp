
#include<bits/stdc++.h>
using namespace std;

vector<int> vec[1000006];
int u[1000006];
int v[1000006];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    cin>>u[i]>>v[i];
		vec[u[i]/1003].emplace_back(i);
	}
	for(int i=1;i<1003;i+=2)
	{
		sort(vec[i].begin(),vec[i].end(),[](int a ,int b){
			return v[a]<v[b];
		});
	}
	for(int i=1;i<1003;i+=2)
	{
		sort(vec[i].begin(),vec[i].end(),[](int a,int b){
			return v[a]>v[b];
		});
	}
	for(int i=0;i<1003;i++)
	{
		for(int x: vec[i])
		{
			cout<<x<<" ";
		}
	}
	
}

