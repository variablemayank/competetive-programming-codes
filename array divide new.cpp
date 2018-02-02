#include<stdio.h>
int main()
{
	int t,cal=1,k,n,i;
	long long int A[100000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{scanf("%lld",&A[i]);}
	
	scanf("%d",&n);
		if(n!=0)
	{
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&k);
			    cal=cal*k;
	}
	for(int i=0;i<t;i++)
	{
		A[i]=A[i]/cal;
	}
	for(int i=0;i<t;i++)
	{
		printf("%lld ",A[i]);
	}
   }
   else
   {
   	for(int i=0;i<t;i++)
   	{
   		A[i]=0;
   		printf("%lld",A[i]);
	   }
	 }  
	return 0;
}
