#include<iostream>
using namespace std;
#define ll long long
int main()
{
	
	int t;
	cin>>t;
	ll A;
	while(t--)
	{
		int count =1;
		cin>>A;
		while(A/2!=0)
		{
		   if(A%2==1)
		   {
		   	   count++;
		   	   A=A/2;
		   }
		   else
		   {
		   	A=A/2;
		   }
		}
		cout<<count<<endl;
	}
}
