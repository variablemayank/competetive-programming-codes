#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2; int j,count=0;
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.length();)
	{
		int found = s1.find(s2,j=i);
		if(found ==-1) break;
		else count++;
		i= found+s2.length();
	}
	
	cout<<count;
}
