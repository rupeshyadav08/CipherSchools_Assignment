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


node* ArrayToBinaryTree(int arr[],int start, int end)
{
    if(start>end){
        return NULL;
    } 
    int mid=(start+end)/2;
    node* root=addnode(arr[mid]);

    root->left=ArrayToBinaryTree(arr,start,mid-1);
    root->right=ArrayToBinaryTree(arr,mid+1,end);
    return root;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    node *root = ArrayToBinaryTree(arr, 0, n-1);  
    cout << "PreOrder Traversal of constructed BST \n";  
    preorder(root);  
  
}