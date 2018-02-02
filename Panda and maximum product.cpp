#include<iostream>
using namespace std;
int main()
{
	long long unsigned  t,key,j;
	long long  unsigned  A[100000];
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>A[i];
		
	}
	for(int i=1;i<t;i++)
	{
		key=A[i];
		j=i-1;
		while(j>=0&&A[j]>key)
		{
			A[j+1]=A[j];
			j=j-1;
			
		}
		A[j+1]=key;
	}
	cout<<A[t-1]*A[t-2]<<"\n";
		return 0;
}
