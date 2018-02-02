#include<iostream>
using namespace std;

struct Node
{
	int data;
	 Node* next;
};
struct Node* head ;
void Insert(int x)
{
	Node *temp = new Node;
	temp->data=x;
	temp->next=head;
	head=temp;

}
void Print()
{
	struct Node* temp =head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
		
	}
	cout<<"\n";
}
int main()
{
	head= NULL;
		int n,x,i;
	for(int i=0;i<3;i++)
{

     cin>>x;
	Insert(x);
	Print();
}
	return 0;
}

