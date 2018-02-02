#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string s,ans;
	map<string,int> l;
	cin>>t;
	while(t--)
	{
		cin>>s;
		l[s]++;
	}
   ans=l.begin()->first;
   int key=l.begin()->second;
   for(map<string,int>::iterator it=l.begin();it!=l.end();it++)
   {
   	 if(it->second>=key)
   	 {
   	 	if(it->second>key)	ans=it->first,key=it->second;
   	 	if(it->second==key&&it->first<=ans)  ans=it->first;
   	 }
   }
   cout<<ans<<"\n";
   return 0;
}
