#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,r=0,b=0,g=0;
	cin>>t;
	char s[200];
	cin>>s;
	for(int i=0;i<t;i++)
	{
		if(s[i]=='R') r++;
		if(s[i]=='B') b++;
		if(s[i]=='G') g++;
		
	}
	//cout<<r<<b<<g;
	if(r>0&&g>0||(r>1||g>1)&&(b>0) ||(r==0&&g==0))cout<<"B";
	if(r>0&&b>0||(r>1||b>1)&&(g>0) ||(r==0&&b==0))cout<<"G";
	if(b>0&&g>0||(b>1||g>1)&&(r>0) ||(b==0&&g==0))cout<<"R";
}
