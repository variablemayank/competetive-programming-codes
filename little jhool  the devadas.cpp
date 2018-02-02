#include<iostream>
using namespace std;
int main()
{
	int t,A[101],m=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>A[i];
		
	}
	for(int j=0;j<t;j++)
	{
		if(A[j]>2&&A[j]%2!=0)
		{
			m=m+A[j];
		}
	}
	if(m%2==0)
	cout<<":(\n";
	else
	cout<<m;
	return 0;
}
