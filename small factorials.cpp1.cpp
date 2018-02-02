#include<iostream>
using namespace std;
int main()
{
int t,n,k;

	cin>>t;
	long int A[n];
	for(int i=0;i<t;i++)
	{
		cin>>A[i];
	}
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		for(int j=0;j<t;j++)
		{
			A[j]=A[j]/k;
		}
	
	}
	for(int i=0;i<t;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}
	
