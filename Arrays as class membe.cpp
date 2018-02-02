#include<bits/stdc++.h>
using namespace std;

class students
{
  int getno;
  int arr[100];
  public:
  	void getdata();
  	void printdata();
};
void students:: getdata()
{
	
	for(int i=0;i<4;i++)
	{
		cout<<"Enter marks for the "<<i+1<<"students"<<endl;
		cin>>arr[i];
	}
}
void students::printdata()
{
	int total =0;
	for(int i=0;i<4;i++)
	{
		total += arr[i];
	}
	cout<<total<<endl;
}
int main()
{
	students obj;
	obj.getdata();
	obj.printdata();
	cout<<endl;
	
}
