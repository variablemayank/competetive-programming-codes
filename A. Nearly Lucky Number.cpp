#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int count =0;
//	bool flag1 = false;
//	bool flag2 = false; 
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='4')
		{
			count++;
		}
		else if(s[i]=='7')
		{
			count++;
		}
	//	else return cout<<"NO",0;
	}
	if(count == 4 || count==7)
	return cout<<"YES",0;
	return cout<<"NO",0;
}
