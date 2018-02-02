#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		while(n%2==0)
		{
			cout<<"NO\n";
			n=n/2;
		}
		for(int i=3;i<=sqrt(n);i=i+2)
		{
			while(n%i==0)
			{
				cout<<"NO\n";
			}
			if(n>2)
		    cout<<"YES\n";
			
		}
	}
}
