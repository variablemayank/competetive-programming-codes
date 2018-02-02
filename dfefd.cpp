#include<iostream>
using namespace std;
int main()
{
	int a=3;
	int*p;
	p=&a;
	cout<<"address of a is "<<&a<<endl;
	cout<<"value of a is "<<a<<endl;
	cout<<"address of p is"<<&p<<endl;
	cout<<"value of p is"<<p<<endl;
	cout<<"p points to"<<*p<<endl;
	return 0;
}
	

