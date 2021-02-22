#include<bits/stdc++.h>
using namespace std;


struct node {
    int data;
    node* left; 
    node* right;
    node* parent;
};

struct node* addnode( int val)
{
    struct node* addnode = new node();
    addnode->data=val;
    addnode->left=addnode->right=NULL;
    return addnode;
}

node* min(node* root){
    node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;

    }
    return temp;
}

node* InorderSucc(  node* n)
{
    if (n->right != NULL){

        return min(n->right);
        }
 
     node* p = n->parent;
    while (p != NULL && n == p->right) {
        n = p;
        p = p->parent;
    }
    return p;
}


int main(){
    node *root = addnode(20);  
    root->left = addnode(8);  
    root->right = addnode(22);  
    root->left->left = addnode(4);  
    root->left->right = addnode(12);  
    root->left->right->left = addnode(10);  
    root->left->right->right = addnode(14);
    cout<<InorderSucc(root,14);
}