#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int t;
	cin>>s>>t;
	map<char ,int > mp;
	for(int i=0;i<s.size();i++)
	{
		mp[s[i]]++;
	}
	
	string ans;
	for(int i=0;i<s.size();i++)
	{
	  if(mp[s[i]]>=t)
	  {
	  	 ans += s[i];
      }
	}
	cout<<ans<<endl;
}
