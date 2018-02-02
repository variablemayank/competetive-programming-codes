#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int sum=0;
	for(int i=3;i<t;i++)
    {
    	if(i%3==0 ||i%5==0) sum+= i;
	} 
	cout<<sum<<endl;
}
