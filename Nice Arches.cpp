#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
		stack<char> s;
		string s1;
		cin>>s1;
		//s.push(s1[0]);
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]=='A') 
			{
				if(s.empty()) s.push(s1[i]);
				else {
					if(s1[i]==s.top()) s.pop();
					else s.push(s1[i]);
				}
			}
			if(s1[i]=='B')
			{
				if(s.empty())
				{
					s.push(s1[i]);
					
				}
				else
				{
					if(s1[i]==s.top()) s.pop();
					else s.push(s1[i]);
				}
			}
		}
		if(s.empty()) count++;
		}
		cout<<count;
	}
