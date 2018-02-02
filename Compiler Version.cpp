#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1;
	string s2;
	string s3;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	for(int i=0;i<s1.length();i++) 
	{
	if(s1[i]='-'&&s1[i+1]=='>')   
	s1[i]='.';
}
    
	for(int i=0;i<s2.length();i++) 
	{
if(s1[i]='->'&&s1[i+1]=='>') 
 {
 s2[i]='.';}
}
	for(int i=0;i<s3.length();i++) 
	{
if(s1[i]='->'&&s1[i+1]=='>') 
{
  s3[i]='.';
}
}
	cout<<s1;
	cout<<s2;
	cout<<s3;
	return 0;
}
