#include<iostream>
#include<assert.h>
using namespace std;
int main()
{
	int x=0,y=0;
	string s;
	cin>>s;
	assert(s.length()>=1&&s.length()<=100000);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='L') x-=1;
		 if(s[i]=='R')	x+=1;
		if(s[i]=='U') y+=1;
		 if(s[i]=='D')	y-=1;		
	}
	cout<<x<<" "<<y<<"\n";
	return 0;
}
