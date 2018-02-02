#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s;
	cin>>s;s1='a';
	s = s1+s;
	
	int sum=0;
	for(int i =1;i<s.length();i++)
	{
		sum += min(abs(s[i]-s[i-1]),26-abs(s[i]-s[i-1]));
		
	}
	cout<<sum<<endl;
}
