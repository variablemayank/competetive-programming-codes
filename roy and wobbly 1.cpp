#include<stdio.h>
int main()
{
	int t,n,k,i,j;
	scanf("%d",&t);
	while(t--)
	{
	
		scanf("%d%d",&n,&k);
		if(k>81)
		{
			printf("-1\n");
			continue;
			
		}
		int start=(k/9)+(k%9!=0);
		
	    int order=k%9;
	    if(order==0) order=9;
	    
	    int second=order;
	    if(second<=start) second--;
	    for(i=0,j=1;i<n;i++,j=j*-1)
	    {
	    	if(j==1) printf("%d",start);
	    	else 	printf("%d",second);
	    
	    	
		}
		printf("\n");
	}
}
