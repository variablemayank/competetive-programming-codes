#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; int k;
	cin>>s>>k;
	for(long long  i=0;i<s.length()&&k>0;i++)
	{
		if(s[i]==9)
		{
	           continue;
	     }
	     else 
	     {
	     	s[i]= '9';
	     	k--;
	     }
	          
		
	   
	}
	cout<<s;
}
