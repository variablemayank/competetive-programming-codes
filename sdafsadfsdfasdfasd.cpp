#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

node* new_node(int val)
{
	node* tem=new node;
	tem->data=val;
	tem->left=NULL;
	tem->right=NULL;
	return tem;
}

void travel(node* cur)
{
	if(cur==NULL)
	return ;
	cout<<cur->data<<" ";
	travel(cur->left);
	travel(cur->right);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	
	
		map<int,node*> mp;
		int N;
		cin>>N;
		node* root=new_node(1);
		mp[1]=root;
		while(N--)
		{
			int cur,L,R;
			cin>>cur>>L>>R;
			mp[cur]->left=new_node(L);
			mp[cur]->right=new_node(R);
			mp[L]=mp[cur]->left;
			mp[R]=mp[cur]->right;
		}
		travel(root);
		cout<<endl;
	}
	
	return 0;
}
