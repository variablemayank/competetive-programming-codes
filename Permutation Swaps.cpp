#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
int dad[100005]={0};
int p[100005];
int q[100005];

int find(int x)
{
     if(x!= dad[x])
     return dad[x] = find(dad[x]);
     return parent[x];
}


int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		
		for(int i=0;i<=100005;i++) dad[i] =i;
		
		int n,query;
		cin>>n>>query;
		for(int i=1;i<=n;i++)
		{
			int val;
			cin>>val;
			p[val] = i;
		}
		for(int i=1;i<=n;i++)
		{
			int val;
			cin>>val;
			q[val] =i;
		}
		for(int i=1;i<=query;i++)
		{
			int u,v;
			cin>>u>>v;
		     u  =find(u);
		     v= find(v);
			if(u== v)
			{
				continue;
			}
			else
			{
				dad[u] = v;
			}
		}
		bool flag = true;
		for(int i =1;i<=n;i++)
		{
			if(find(p[i])==find(q[i]))
			{
				//cout<<find(p[i])<<" "<<find(q[i])<<endl;
				continue;
			}
			else 
			{
				flag =false;
			}
		}
		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
