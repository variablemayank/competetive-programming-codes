#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void dfs(vector<int> v[],int root)
{
	stack<int>s ;
	int k;
	s.push(root);
	while(!s.empty())
	{
		k= s.top();
		s.pop();
		for(int i=v[k].size()-1;i>=0;i--)
		{
			s.push(v[k][i]);
		}
		cout<<k;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y,z;
		vector<int> v[100002];
		cin>>n;
		while(n--)
		{
			cin>>x>>y>>z;
			if(y!=0)
			{
				v[x].push_back(y);
			}
			if(z!=0)
			{
				v[x].push_back(z);
			}
		}
		dfs(v,1);
		cout<<endl;
	}
}
