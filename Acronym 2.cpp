#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
		map<string,int>mp;
		map<string,int>::iterator it;
	for(int i=0;i<t;i++)
	{
		cin>>s;
		mp.insert(pair<string,int>(s,i));
		
	}
   for(it=mp.begin();it<=mp.end();it++)
   {
	 cout<<it->first;
}
	return 0;
}


