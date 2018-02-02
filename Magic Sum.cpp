#include<bits/stdc++.h>
using namespace std;



Tree *tobj;
Node* create_node(int val){ 
Node *p = bst_init();
p = (Node*)malloc(sizeof(Node));
p->data = val; 
p->left = NULL;
p->right = NULL;
return p;
}?
 
void level_order_insert(Tree* root, int* arr, int start, int size)
{
    int left = 2*start+1;
    int right = 2*start+2;
 
    if(left > size || right > size)
        return;
 
    if(root == NULL) {
        tobj = createNode(arr[start]);
        root = tobj;
    }
 
    if(root->left == NULL && root->right == NULL) {
        if(left < size)
            root->left = createNode(arr[left]);
        if(right < size)
            root->right = createNode(arr[right]);
    }
    level_order_insert(root->left, arr, left, size);
    level_order_insert(root->right, arr, right, size);
 
}
 
main() {
   int A[] = {0,1,2,3,4,5,6,7,8,9}
   level_order_insert(tobj, A, 0, 10);
}
