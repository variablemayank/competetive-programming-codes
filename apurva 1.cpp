#include<iostream>
using namespace std;
int main()
{
	int a=3;
	int*p;
	p=&a;
	cout<<"address of a is "<<&a;
	cout<<"value of a is "<<a;
	cout<<"address of p is"<<&p;
	cout<<"value of p is"<<p;
	cout<<"p points to"<<*p;
	return 0;
}
	

