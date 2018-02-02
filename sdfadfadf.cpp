#include<bits/stdc++.h>
using namespace std;
bool a[110]={false};
int main()
{
int t;
cin>>t;
while(t--)
{
	string s;
	int count=0;
	cin>>s;
	for(int i=0;i<s.length();)
	{
		if(s[i]=='m' && s[i+1]=='s')
		{
			count++;
			i=i+2;
		}
		else if(s[i]=='s' && s[i+1]=='m')
		{
			count++;
			i=i+2;
		}
		else i++;
	}
	int counts=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='s') counts++;
	}

	int countm=s.length()-counts;
	//	cout<<count;
	if(countm>counts-count) cout<<"mongooses\n";
	else if(countm==counts-count) cout<<"tie\n";
	else cout<<"snakes\n";
	}	
}
