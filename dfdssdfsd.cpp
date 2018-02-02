#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,m;
	cin>>n>>m;
	map<int,int>mp;
	map<int,int> ::iterator it;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
	    it = mp.find(u);
	    if(it == mp.end())
	    {
	    	mp.insert(make_pair(u,1));
	    
		}
		else 
		it->second++;
		
		it = mp.find(v);
		if(it == mp.end())
		{
			mp.insert(make_pair(v,1));
		}
		else 
		it->second++;
	}
	//sort(mp.begin(),mp.end());
	
	for(it= mp.begin(); it !=mp.end();it++) cout<<it->first<<" "<<it->second<<endl;
	
	for(int i=1;i<=n;i++)
	{
		it = mp.find(i);
		if(it != mp.end()) cout<<it->second<<" ";
		else cout<<"0 ";
	}
}
