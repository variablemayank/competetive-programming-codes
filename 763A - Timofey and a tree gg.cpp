/* Move fast and break thintree Unless you are breakintree stuff
 you are not movintree fast: */
#include<bits/stdc++.h>
using  namespace std;

const int maxi = 100005;
vector<int> tree[maxi];
bool ok;
int n;
int current_color,color[maxi];

bool dfs(int v, int parent)
{
	ok = ok && (color[v]== current_color);
	for(int i=0;i<tree[v].size();i++)
	{
		if(tree[v][i] != parent)
		{
			dfs(tree[v][i],v);
		}
	}
}


bool check(int v)
{
	int ans = true;
	for(int i=0;i<tree[v].size();i++)
	{
		current_color = color[tree[v][i]];
		ok = true;
		dfs(tree[v][i],v);
		ans = ans && ok;
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
	 int u,v;
	 cin>>u>>v;
	 tree[u].push_back(v);
	 tree[v].push_back(u);
	}
	for(int i=0;i<n;i++) cin>>color[i];
	
	int root1=-1;
	int root2 =-1;
	for(int i=1;i<=n;i++)
	{
		for(auto  var:tree[i])
		{
			if(color[var] != color[i])
			{
				root1 = var;
				root2= i;
			}
		}
	}
	
	if(root1 == -1)
	{
		cout<<"YES\n1";
		return 0;
	}
	bool res1 = check(root1);
	bool res2 = check(root2);
	if(res1== true)
	{
		cout<<"YES\n";
		cout<<root1<<endl;
		return 0;
	}
	if(res2== true)
	{
		cout<<"YES\n";
		cout<<root2<<endl;
		return 0;
	}
	cout<<"NO\n";
}
