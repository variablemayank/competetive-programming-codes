/* LINKED LIST INSTION AT BEGINNING*/


#include<iostream>
using namespace std;
struct Node{   // structure declaration 
	int data;  // two parts in NODE first is data 

	Node* link;  // and one is Link is part 
	
};
struct Node* head;             // Global Declaration of Structure Creating head as poiner top nODE 
void insert(int x)
{
	Node* temp= new Node;

	temp->data=x;              // inserting the element in data part 
	temp->link=head;           // insert the link function you can also write *temp.link= head
	head=temp;
	
}
void print()
{
	struct Node* temp=head;
	cout<<"List is ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<"\n";
}
int main()               // Body part 
{
	int n,x;
   head=NULL;
   cout<<"ENTER THE NO OF ELEMENTS\n";
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	 cin>>x;
   	 insert(x);
   	 print();
   	 
   }
   return 0;
}
	
