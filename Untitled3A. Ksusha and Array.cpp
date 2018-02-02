#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int g =0;
	set<int> s;
	for(int i=0;i<t;i++)
	{
		int u;
		cin>>u;
		g = __gcd(g,u);
		s.insert(u);
    }
    if(s.find(g)!=s.end())
    {
    	cout<<g;
    	return 0;
	}
	else
	{
		cout<<"-1";
		return 0;
	}
    
}
