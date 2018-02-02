#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	map<string,int>m;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		m[s]++;
		
	}
	string ans= m.begin()->first;
	int maxx=m.begin()->second;
	for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
	{
		if(it->second>=maxx)
		{
			if(it->second>maxx)
			{
				ans=it->first;
				maxx=it->second;
			}
			else if((it->second==maxx)&& (it->first<=ans))
			{
				ans=it->first;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
