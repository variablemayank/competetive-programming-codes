#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d; string s,s1,s2,s3,str;
	while(a--)
	{
		s = s+"00";
	}
	while(b--)
	{
		s1= s1+"01";
	}
	while(c--)
	{
		s2 = s2+"10";
	}
	while(d--)
	{
		s3 = s3+"11";
	}
	str = s+s1+s2+s3;
	int len = str.length();
	if(len<1000000)
	{
		cout<<str;
	}
	else
	{
		cout<<"Impossible";
	}
}
