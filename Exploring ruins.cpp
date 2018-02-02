#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='?')
    	{
    		if(s[i-1]=='a')
    		s[i] ='b';
    		if(s[i+1]=='a' && i+1 <s.length()) s[i] ='b';
    		else s[i]= 'a';
		}
	}
	
	cout<<s;
}
