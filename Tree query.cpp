	#include<bits/stdc++.h>
	using  namespace std;
	

    int to[100005];
    int from[100005];
	int main()
	{
		int n,m;
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
		  int u,v;
		  cin>>u>>v;
		  to[u]++;
		  from[v]++;
		}
		int count =0;
		int count1=0;
		for(int i=1;i<=n;i++)
		{
			if(to[i]==0)count++;
		}
		for(int i=1;i<=n;i++)
		{
			if(from[i]==0) count1++;
		}
		cout<<max(count,count1);
	}
