#include"bits/stdc++.h"
using namespace std;

int fun(set<int> s)
{
	int mex =0;
	while(s.find(mex)!= s.end())
	mex++;
	return mex;
}

int fun1(set<int> s,int k)
{
	
	for(int i=0;i<=2*100000 && k>0;i++)
	{
		if(s.find(i) == s.end())
		{
			s.insert(i);
			k--;
		}
	}
	int mex=0;
	int var = fun(s);
	return var;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		set<int> s;
		
		
		for(int i=0;i<n;i++)
		{
			int p;
			cin>>p;
			s.insert(p);
		}
		
		if(k ==0)
		{
			cout<<fun(s);
			cout<<endl;
		}
		else
		{
			cout<<fun1(s,k);
			cout<<endl;
		}
		}
	}
