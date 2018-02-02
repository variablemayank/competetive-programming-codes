#include<iostream>
using namespace std;
#define ll long long 
int main()
{
	ll t,n;
	cin>>t;
	while(t-->0)
	{
		cin>>n;
		if(n==0)
		{
			cout<<"0"<<"\n";
			
		}
		else if(n<3)
		{
			cout<<"1"<<"\n";
		}
		else if(n%3==0)
		{

		   cout<<n/3<<"\n";
		}
		else
		{
			cout<<n<<"\n";
		}
	}
	return 0;
}
