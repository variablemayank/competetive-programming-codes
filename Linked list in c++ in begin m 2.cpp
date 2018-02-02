#include<iostream>
using namespace std;
struct Node{
	
	int data;
	Node* link;
	
};
Node* insert(Node* head,int x)
{
	Node* temp= new Node;
	temp->data=x;
	temp->link=head;
    head=temp;
}
void print(Node* head)
{
	printf("List is:");
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->link;
	}
	cout<<"\n";
}
int main()
{
   
   Node* head=NULL;
	int n,k;
	cout<<"How may numbers\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Enter the NO\n";
		cin>>k;
		head=insert(head,k);
		print(head);
	}
}
