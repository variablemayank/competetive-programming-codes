#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,sum1=0;
	cin>>n;
	int A[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	    for(int i=0;i<n;i++)
	    {
		
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+A[i][j];
				
			}
		}
	}
		
		for(int i=0,j=n-1;i<n,j>=0;i++,j--)
		{
			sum1=sum1+A[i][j];
		}
cout<<sum-sum1;
return 0;
}
		
		
		
		
		
		
		
		

