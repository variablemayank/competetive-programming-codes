#include<bits/stdc++.h>
 
using namespace std;
 
#define all(x) x.begin() x.end()
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
    map<string,vector<int> >mp;
	for(int i=0;i<t;i++)
	{
	
		string s;
		cin>>s;
		mp[s].push_back(i+1);
    }
	int q;
	cin>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		string s;
		cin>>s;
		int start =lower_bound(mp[s].begin(),mp[s].end(),a)-mp[s].begin();
		int end   = upper_bound(mp[s].begin(),mp[s].end(),b)-mp[s].begin();
		cout<<end-start<<endl;
	}
}
