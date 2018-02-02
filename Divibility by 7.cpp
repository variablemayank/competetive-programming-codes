#include<bits/stdc++.h>
using namespace std;
string s;
bool check()n
{
	int k=0;
	for (auto i:s) k=(k*10+i-'0')%7;
	return !k;
}
int main()
{	
	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>s,sort(s.begin(),s.end(),greater<char> ());
	int p=0;
	for (;p<s.size() && s[p]!='0';p++) ;
	for (int i=0;i<200;i++)
	{
		random_shuffle(s.begin(),s.begin()+p);
		if (check()) return cout<<s,0;
	}
	cout<<0;
}
