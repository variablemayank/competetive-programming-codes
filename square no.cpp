#include<iostream>
using namespace std;
int main()
{
	long unsigned int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(n==i*i)
		{
			cout<<"YES\n";
			return 0;
		}
		
	}
	cout<<"NO\n";
	
	
	return 0;
}
