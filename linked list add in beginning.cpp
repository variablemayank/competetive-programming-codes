#include<stdio.h>
#include<stdlib.h>
void Insert(int );
void Print();
struct Node{
	int data;
	struct Node* next;
	
};
struct Node* head;
int main()
{
	head =NULL;
	printf("How many no\n");
	int n,x,i;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the no\n");
		scanf("%d",&x);
		Insert(x);
		Print();
	}
}
void Insert(int x)
{
	Node* temp= (Node*)malloc(sizeof(struct Node));
	temp->data =x;
	temp->next =head;
	head =temp;
}
void Print()
{
	struct Node* temp= head;
	printf("LISt is :");
	while(temp!=NULL)
	{
		printf(" %d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
