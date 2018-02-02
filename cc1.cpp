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
		int len = s.length();
		int snake =0;
		int mango =0;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='s') snake++;
			if(s[i]=='m') mango++;
		}
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='m')
			{
				if((i+1<len && s[i+1]=='s')||(i-1>=0 && s[i-1]=='s'))
				{
				   if(i+1<len)
				   s[i+1] ='d';
				   else if(i-1>=0)
				   s[i-1] ='d';
				   
				   snake--;
				}
			}
		}
		if(snake==mango) cout<<"tie\n";
		if(snake<mango) cout<<"mongooses\n";
		if(snake>mango) cout<<"snakes\n";
	}
	return 0;
}
