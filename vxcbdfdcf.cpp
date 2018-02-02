#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if((a%5==0||b%5==0))
	{
		int add1= a+b;
		int add2=a+1+b;
		cout<<add1<<" "<<add2<<endl;
	}
else if((a%6==0)||(b%6==0))
	{
		int add1=a+b;
		int add2=a+b-1;
		cout<<add1<<" "<<add2<<endl;
	}
	else
	{
	
		cout<<a+b<<endl;
	}
	
	
}
