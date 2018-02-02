#include<iostream>
using namespace std;
int main()
{
	int A[101];
	for(int i=0;i<100;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<100;i++)
	{
		if(A[i]==0)
		{
			cout<<A[i]<<"\n";
		}
		if(A[i]==1)
		{
			cout<<A[i]<<"\n";
		}
	}
	return 0;
}
