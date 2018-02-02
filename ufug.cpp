#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int res=0;
		int total=s.length()+1;
		if(s[0]=='<')
		{
			res++;
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='<')
				{
					continue;
				}
				else if(s[i]=='>'||s[i]=='=')
				{
					total--;
				}
			}
			cout<<total<<endl;
		}
		else if(s[0]=='>'||s[0]=='=')
		{
			res++;
			for(int i=0;i<s.length();i++)
			{
				if(s[i]=='>')
				{
					continue;
				}
				else if(s[i]=='<'||s[i]=='=')
				{
					total--;
				}
			}
			cout<<total<<endl;
		}
		
	}
}
