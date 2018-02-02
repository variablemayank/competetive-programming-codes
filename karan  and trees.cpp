#include<bits/stdc++.h>
using namespace std;


int main()
{
	unsigned long long  t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b; 
		while(a!=b)
		{
			while(a>b)
			{
				a=floor(a/2);
			}
			while(a<b)
			{
				b=floor(b/2);
			}
		}
		cout<<a<<endl;
	}
}
