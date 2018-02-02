#include <bits/stdc++.h>
using namespace std;

const long long int MAX=1e5;

long long int mx=-(MAX*MAX);

struct node
{
	long long int data;
	node* left;
	node* right;
};

node* new_node(long long int val)
{
	node* tem=new node;
	tem->data=val;
	tem->left=NULL;
	tem->right=NULL;
}

node* insert(node* cur,long long int val)
{
	if(cur==NULL)
	{
	   return new_node(val);
    }
    if(val<=cur->data)
    cur->left=insert(cur->left,val);
    else if(val>cur->data)
    cur->right=insert(cur->right,val);
}

node* lca(node* cur,long long int X,long long int Y)
{
	if(X<=cur->data&&Y<=cur->data)
	return lca(cur->left,X,Y);
	else if(X>cur->data&&Y>cur->data)
	return lca(cur->right,X,Y);
	return cur;
}

void find_max(node* cur,long long int X)
{
	mx=max(mx,cur->data);
	cout<<mx<<"\n";
	if(cur->data==X)
	return ;
	else if(X<=cur->data)
	find_max(cur->left,X);
	else
	find_max(cur->right,X);
}

int main()
{
	long long int N,arr[MAX];
	cin>>N;
	cin>>arr[1];
	node* root=new_node(arr[1]);
	for(int A=2;A<=N;A++)
	{
		cin>>arr[A];
		insert(root,arr[A]);
	}
	long long int X,Y;
	cin>>X>>Y;
	node* tem=lca(root,X,Y);
	find_max(tem,X);
	find_max(tem,Y);
	cout<<mx;
	return 0;
}
