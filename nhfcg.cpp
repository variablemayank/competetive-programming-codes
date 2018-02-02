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
		int total=s.length()+1;
		for(int i=0;i<s.length()-1;i++)
		{
		if((s[i]=='<'&&s[i+1]=='<')||(s[i]=='>'&&s[i+1]=='>')) continue;
		else if((s[i]=='<'&&s[i=1]=='>')||(s[i]=='>'&&s[i=1]=='<')||(s[i]=='='&&s[i=1]=='<')||(s[i]=='<'&&s[i=1]=='=')||(s[i]=='>'&&s[i=1]=='=')||(s[i]=='='&&s[i=1]=='>')||(s[i]=='='&&s[i=1]=='='))
		total--;
		}
		cout<<total<<endl;
	}
	
}
