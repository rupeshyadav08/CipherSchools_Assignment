#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};

void push(node** head,int newdata){
    node* newnode=new node();
    newnode->data=newdata;
    newnode->next=*head;
    *head=newnode;
}

void print(node** head)
{
    node* temp=*head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


node* merge(node* head1,node* head2){
    
    node* ans = NULL; 
    if (head1 == NULL){ 
        return head2; }
    else if (head2 == NULL) {
        return head1; }
     
    if (head1->data <= head2->data) 
    { 
        ans = head1; 
        ans->next = merge(head1->next, head2); 
    } 
    else
    { 
        ans = head2; 
        ans->next = merge(head1, head2->next); 
    } 
    return ans; 
}



int main(){
node* head=NULL;

push(&head,50);
push(&head,40);
push(&head,30);
push(&head,20);
push(&head,1);

node* head2=NULL;
push(&head2,12);
push(&head2,11);
push(&head2,9);
push(&head2,8);
push(&head2,6);


cout<<"\n";
print(&head);
print(&head2);
node* result=NULL;
result=merge(head,head2);
cout<<"\n";
print(&result);
}

