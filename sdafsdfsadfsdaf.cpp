#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='S')
		{
			s[i] = '1';
			
		}
		else
		{
			s[i] = '0';
		}
	}
	int san = 0;
	int seat = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1'&& s[i+1]=='0')
		san++;
        if(s[i]=='0'&& s[i+1]=='1')
        seat++;
        
	}
	if(san>seat)
	return cout<<"Yes\n",0;
	else cout<<"No\n",0;
}
