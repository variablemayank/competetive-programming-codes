#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int count =0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int u,v;
			cin>>u>>v;
			if(u==1 || v==1)
			count++;
		}
	}
	cout<<count<<endl;
}
