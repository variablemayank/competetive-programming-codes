#include<iostream>
using namespace std;
int main()
{
	int t,c=0,A[1000];
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<t;i++)
	{
		if(A[i]=A[i]+1)
		{
			c++;
		}
		if(A[i]==A[i+2])
		{
			c++;
			
		}
		if(A[0]==A[i])	
		{
			c++;
		}		
	}
	cout<<c;
	return 0;

}

