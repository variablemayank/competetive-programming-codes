#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	string s;
	cin>>k>>s;
	long long int sum  =0;
	for(int i=0;i<s.size();i++)
	{
		 sum  += s[i] -'0';
	}
	if(sum>=k)
	{
		cout<<"0",0;
	}
	else
	{
		return cout<<k-sum,0;
	}
	
}
