#include<iostream>
#include<math.h>
#include<string.h>
#define ll long signed  
using namespace std;
int main()
{
	ll a,b,m,ans=0;
	  string str;
	cin>>a>>b;
    cin>>str;
    for(ll i=0;i<str.size();i++)
    {
    	m=pow(a,i+1);
    	if(str[i]=='1')
    	{
    		ans=ans+m;
		}
	}
	cout<<ans%b<<"\n";
	return 0;
}
	
	
	
	
