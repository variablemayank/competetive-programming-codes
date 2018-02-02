#include<stdio.h>
long int A[1000];
long int B[1000];
int main()
{
	int t,n,i,k,j;
	scanf("%d",&t);

	for(int i=0;i<t;i++)
	{
		scanf("%ld",&A[i]);
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k);
		for(j=0;j<t;j++)
		{
			B[i]=A[j]/k;
		}
	}
	for(int i=0;i<t;i++)
	{
		printf("%ld",B[i]);
		printf(" ");
	}
}
