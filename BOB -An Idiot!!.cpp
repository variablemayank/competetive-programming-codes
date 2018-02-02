#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<char,int>m1;
	map<char,char>m2;
	int n;
	cin>>n;
	for(int i=0;i<26;i++) m1['A'+i]=i;
	for(int i=0;i<n;i++)
	{
		char s1,s2;
		cin>>s1;
		cin>>s2;
		swap(m1[s1],m1[s2]);
	}
	for(map<char,int>::iterator it=m1.begin();it!=m1.end();it++) 
	{
		m2['A'+it->second]=it->first;
		m2['a'+it->second]=it->first+32;
	}
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(m2[s[i]]) cout<<m2[s[i]];
		else cout<<s[i];
	}
}
