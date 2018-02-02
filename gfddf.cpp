#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a%10==5&&b%10==5)
	{
		cout<<a+b<<" "<<a+b+2<<endl;
	}
	else if(a%10==6||b%10==6)
	{
	   cout<<a+b<<" "<<endl;
	}
	else if(a%10==5||b%10==6)
	{
		cout<<a+b<<" "<<a+b+1<<endl;
	} 
	else if(a%10==6||b%10==5)
	{
		cout<<a+b<<" "<<a+b+1<<endl;
	}
	else 
	{
		cout<<a+b<<" "<<endl;
	}
	return 0;
}
