#include<stdio.h>
#include<math.h>
main()
{
	long  int t,n,i,e;
	long int A[10000];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{   e=0;
		A[i]=1;
		scanf("%d",&n);
	
		for(i=1;i<=n-1;i++)
		{
			A[i]=(A[i]*2)%1000000007;
		}
		for(int i=1;i<=3;i++)
		{
			e=(e+A[i])%1000000007;
		}
		A[i]=e;
		
	}
	for(i=1;i<=t;i++)
	printf("%d\n",A[i]);
}
