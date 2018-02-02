#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	//string str1= "AXa";
	
	while(t--)
	{
		int i=0;
		ll st=0;
		string str;
		cin>>str;
		while(i<str.length())
		{
		ll count=0;
		while(i<str.length()&&str[i]=='A'||str[i]=='a'||str[i]=='B'||str[i]=='b'||str[i]=='C'||str[i]=='c')
		{
			count++,i++;
		}
		
		
		st+=count*(count+1)/2;
		i++;}
		cout<<st<<"\n";
		
	}
	return 0;
	
}
