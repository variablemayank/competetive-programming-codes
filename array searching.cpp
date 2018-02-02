#include<iostream>
using namespace std;
int main()
{
	int A[100],g,n,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		if(A[i]==4)
		{
			g=0;
		}
		else
		{
			g=1;
		}
	}
	if(g==0)
	{
		cout<<"found\n";
	}
	else 
	{
		cout<<"notfound\n";
	}
}
