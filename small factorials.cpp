#include<iostream>
using namespace std;
long  A[2000];
long int B[2000];
int main()
{
int t,m;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<t;i++)
	{
		B[i] =1;
		m=A[i];
		//cout<<"m is"<<m<<" ";
		for(int j=i;j<=i;j++)
		{
		
			for(int k=1;k<=m;k++)
			{
				B[j]=B[j]*k;
			}
		}
	}
	for(int i=0;i<t;i++)
	{
		cout<<B[i]<<endl;
	}
	return 0;
}
