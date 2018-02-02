#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int a,b;
	cin>>a>>b;
	int var=1;int var1=2;
	while(a>=0 && b>=0)
	{
		a=a-var;
		if(a<0)
		{
			cout<<"Bob\n";
			break;
		}
		b=b-var1;
		if(b<0)
		{
			cout<<"Limak\n";
			break;
		}
		var=var+2;
		var1=var1+2;
	}
}
}
