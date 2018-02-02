#include<stdio.h>
 

int main()
{
	long long n; 
	scanf("%lld",&n); 
	int var =n;
int  A[51]={0};
	while(n--)
	{
	//printf("%d ",var);
	   if(var==n)
	   {
	   	 for(int i=0;i<50;i++) 
		{
			scanf("%d",&A[i]);
		}
	   }
	   else
	   {
	   	for(int i=0;i<50;i++)
	   	{
		
	   	int k;
	   	
	   	scanf("%d",&k);
	   	
	   	A[i]=k+A[i];
	   	
	    }
	   	
	   }
	    
    }
    for(int i=0;i<10;i++) printf("%d",A[i]);
}
	


