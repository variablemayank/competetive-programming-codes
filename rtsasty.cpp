#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	set<int> s;
	for(int i=1;i<10;i++) 
	{
		int x;
		cin>>x;
		s.insert(x);
	}
	set<int> :: iterator it;
	for(it=s.begin();it!=s.end();it++);
	{
		cout<<*it<<" ";
	}
	
}
