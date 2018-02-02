#include<bits/stdc++.h>
using namespace std;


int n,k;
vector <int> edges[100005];
bool ok = false;
int vis[100005];

void dfs(int u)
{
	if(u==k) 
	{
		ok = true;
	}
	vis[u]= true;
	for(int i=0;i<edges[u].size();i++)
	{
	    int check = edges[u][i];
	    //cout<<check<<endl;
	    if(!vis[check]) dfs(check);
	   // cout<<endl;
	}
}

int main()
{
	cin>>n>>k;
	k--;
	for(int i=0;i<n-1;i++)
	{
		 int val ;
		 cin>>val;
		 edges[i].push_back(i+val);
	}
	dfs(0);
	if(ok==true) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
