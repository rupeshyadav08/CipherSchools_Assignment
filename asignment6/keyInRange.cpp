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


void Print(node *root, int k1, int k2) 
{ 
    if ( NULL == root ) 
        return; 
    if ( k1 < root->data ) 
        Print(root->left, k1, k2); 
    if ( k1 <= root->data && k2 >= root->data ) 
        cout<<root->data<<" "; 
    if ( k2 > root->data ) 
        Print(root->right, k1, k2); 
} 


int main(){
    node *root = addnode(20);  
    root->left = addnode(8);  
    root->right = addnode(22);  
    root->left->left = addnode(4);  
    root->left->right = addnode(12);  
    root->left->right->left = addnode(10);  
    root->left->right->right = addnode(14);
    Print(root,10,14);
}