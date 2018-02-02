#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int len=s.length();
		int si=0,li=len-1,cnt=0;				
		while(si<=li)
		{
			if(s[si]==s[li]) {si++;li--;}
			else 
			{
				if(s[si]==s[li-1]) li--;
				else if(s[si+1]==s[li]) si++;
				else {cnt++;si++;}
			}
		
		}
		cout<<cnt<<endl;
	}
