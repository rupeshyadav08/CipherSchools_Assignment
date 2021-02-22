#include<bits/stdc++.h>
using namespace std;


struct node {
    int data;
    node* left, *right ;
};

struct node* addnode( int val)
{
    struct node* addnode = new node();
    addnode->data=val;
    addnode->left=addnode->right=NULL;
    return addnode;
}


int lca(node* root,int x,int y){     
 while(root!=NULL){
     if (root->data > x && root->data >y ){
         root=root->left;
     }
     else if(root->data < x && root->data < y){
         root= root->right;
     }
     else{
         break;
     }
 }
    return root->data;
}

int main(){
    node *root = addnode(20);  
    root->left = addnode(8);  
    root->right = addnode(22);  
    root->left->left = addnode(4);  
    root->left->right = addnode(12);  
    root->left->right->left = addnode(10);  
    root->left->right->right = addnode(14);
    cout<<lca(root,14,10);
}