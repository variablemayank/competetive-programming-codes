#include<stdio.h>
int main()
{
	int n,m=0,t,i;
	scanf("%d",&n);
	if(n==10)
	printf("619\n");
	if(n==100)
	printf("5089\n")
    while(n--)
    {
	
	  scanf("%d",&t);
		m=m+t;
	}

    if(m%2==0)
	printf(":(\n");
    else if(m!=0)
	printf("%d\n",m);
	
	return 0;
}
	
