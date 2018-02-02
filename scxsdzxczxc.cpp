#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>6)
	{
		n=n/6;
		for(int i=0;i<n;i++) printf("9");
	}
	else if(n==5) printf("5");
		else if(n==4) printf("4");
		else if(n==3) printf("7");
		else if(n==2) printf("1");
	}
