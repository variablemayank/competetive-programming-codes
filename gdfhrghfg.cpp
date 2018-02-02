#include<iostream>
using namespace std;
int main()
{
	int t,sum=0,location=1;
	cin>>t;
	int A[1000];
	int B[1000];
	for(int p=0;p<t;p++)
	{
		int n;
	
		cin>>n;
		for(int i=0;i<n-1;i++)
		{
			cin>>A[i];
			
		}
		for(int i=0;i<n-1;i++)
		{
			sum=sum+A[i];
		}
	B[p]=sum;
	}
	 int  maximum = B[0];
 
  for (int c = 1; c<t; c++)
  {
    if (B[c] > maximum)
    {
       maximum  = B[c];
       location = c+1;
    }
  }
  cout<<maximum;
  
 
}
