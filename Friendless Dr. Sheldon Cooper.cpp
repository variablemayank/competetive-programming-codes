#include<bits/stdc++.h>
using namespace std;

vector<int> vec[100005];
bfs(int a)
{
	cout<<a-1<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	 int t;
	 cin>>t;
	 while(t--)
	 {
	 	int a,b;
	 	cin>>a>>b;
	 	for(int i=0;i<a;i++)
	 	{
	 		int u,v;
	 		cin>>u>>v;
	 		vec[u].push_back(v);
	 		vec[v].push_back(u);
		}
		bfs(a);
	 }
}
