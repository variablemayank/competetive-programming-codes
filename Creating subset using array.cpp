#include<iostream>
#include<math.h>
using namespace std;
void cal(int *,int );
int main()
{
	int t,k,A[100];
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		for(int i=0;i<k;i++) 
		{
			cin>>A[i];

       }
		cal(&A[0],k);
	}
	
	
	return 0;
}
void cal(int *B,int k)
{
	int sum=0;
	unsigned int pow_set_size=pow(2,k);
	for(int counter=0;counter<pow_set_size;counter++)
	{
		for(int j=0;j<k;j++)
		{
			if(counter &(1<<j))
			{
				 cout<<B[j];
			}
		}
		cout<<"\n";
	}
	
}
