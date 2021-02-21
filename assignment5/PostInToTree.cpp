#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node* left, *right ;
};

struct node* addnode( int val)
{
    struct node* newnode = new node();
    newnode->data=val;
    newnode->left=newnode->right=NULL;
    return newnode;
}


void Postorder(node* root){
    if (root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    Postorder(root->left);
    Postorder(root->right);
}


void inorder(node* root){
    if (root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}


node* helper(int In[],int Post[],int InS,int InE,int PostE){
    if(InS>InE){
        return NULL;
    }
    node* RootNode=addnode(Post[PostE]);
    PostE--;
    if(InS==InE){
        return RootNode;
    }
    int i;
    for (i = InS; i <= InE; i++) {
        if (In[i] == RootNode->data)
            break;
    }
    int Index = i;

    RootNode->right = helper(In, Post, Index + 1, InE, PostE);
    RootNode->left = helper(In, Post, InS, Index - 1, PostE);
    return RootNode;
    
}

node* BuildTree(int In[],int Post[],int n){
  
  node *Root = helper(In,Post,0,n-1,n-1);
  cout<<"\nInorder of the constructed tree is "<<" ";
  inorder(Root);
  cout<<"\nPostorder of the constructed tree is "<<" ";
  Postorder(Root);
  return Root;
}

int main()
{   
    int In[] = { 4, 8, 2, 5, 1, 6, 3, 7 };
    int Post[] = { 8, 4, 5, 2, 6, 7, 3, 1 };
    BuildTree(In,Post,8);
}