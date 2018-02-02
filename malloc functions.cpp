#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int *p;
	p=(int* )malloc(sizeof(int));
	*p=10;
	printf("%d\n",*p);
	free(p);
	p=(int* )calloc(10,sizeof(int));
	printf("%d%d\n",p,*p);
	
	return 0;
}
