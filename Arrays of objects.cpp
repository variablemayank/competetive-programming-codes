#include<bits/stdc++.h>
using namespace std;

class book
{
	char name[100];
	float price;
	public:
		void getdata();
		void putdata();
};

void book:: getdata()
{
	cout<<"Enter the name of the book\n";
	cin>>name;
	cout<<"Enter the price of the book\n";
	cin>>price;
	
}
void book::putdata()
{
	 cout<<"The name of the book is  ";
	 cout<<name;
	 cout<<endl;
	 cout<<"The price of the book is ";
	 cout<<price;
	 cout<<endl;
	 
}
 int size = 3;
int main()
{
	book obj[size];
	for(int i=0;i<size;i++)
	{
		obj[i].getdata();
		
	}
	for(int i=0;i<size;i++)
	{
		obj[i].putdata();
		cout<<endl;
	}
}
