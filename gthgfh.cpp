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
		if(n==1) cout<<"1\n";
		else if(n==2) cout<<"2\n";
		else cout<<((n*n)/2-1)<<"\n";
		
	}
	return 0;
}
