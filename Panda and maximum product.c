#include<stdio.h>
int main()
{
	int  t;
	long key,i,j;
	long A[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%ld",&A[i]);
	}
	
    for(i=1;i<t;i++)
	{
		key=A[i];
		j=i-1;
		while(j>=0&&A[j]>key)
		{
			A[j+1]=A[j];
			j=j-1;
			
		}
		A[j+1]=key;
	}
   printf("%ld\n",A[t-1]*A[t-2]);
		return 0;
		
	
}
