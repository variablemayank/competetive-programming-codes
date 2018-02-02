#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	long long a,t;
	char s[1000];
	cin.getline(s,1000);
	a=strlen(s);
	cin>>t;
	while(t--)
	{
	long long x,y;
		cin>>x>>y;
	    if(s[x-1]%a==s[y-1]%a)
	    {
	    	cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	return 0;
	
	
}
