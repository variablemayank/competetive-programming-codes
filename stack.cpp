#include<stdio.h>


int stack[10];

int top =-1;
int push(int x)
{
	stack[++top]=x;
	return top;
}
void pop()
{
	stack[top--]=0;
	
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("Enter the no press 1 for push and 2 for pop and 3 for the top element\n");
	for(int i=0;i<n;i++)
	{
		int k;
		scanf("%d",&k);
		
		if(k==1) 
		{
			int h;
			scanf("%d",&h);
			push(h);
		}
		if(k==2)
		{
			pop();
		}
		if(k==3) 
		{
		
			printf("%d\n",stack[top]);
		}
	}
     
	
	
	
}
