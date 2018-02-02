#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string s,ans;
	map<string,int> m;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>s;
		m[s]++;
	}
    ans=m.begin()->first;
    int key=m.begin()->second;
    for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
    {
    	if(it->second>=key)
    	{
    		if(it->second>key)
    		{
    			ans=it->first;
    			key=it->second;
			}
			if(it->second==key&&(it->first<=ans))
			{
				ans=it->first;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
	
