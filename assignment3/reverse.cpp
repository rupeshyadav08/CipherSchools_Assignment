#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node* next;

};

void push(node** head, int push_data){

    node* newnode=new node();
    newnode->data=push_data;
    newnode->next=*head;
    *head=newnode;

}

void reverse(node** head ){
    node* next=NULL;
    node* prev=NULL;
    node* curr=*head;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;

    
}
node* recursive_reverse(node* head){
    if(head==NULL){
        return NULL;
    }
    if (head->next==NULL){
        return NULL;
    }
    node* remain=recursive_reverse(head->next);
    remain->next=head;
    head=NULL;
    return head;
}


void print(node** head)
{
    node* temp=*head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}


int main(){
node* head=NULL;
push(&head,1);
push(&head,2);
push(&head,3);
push(&head,4);
print(&head);
reverse(&head);
cout<<"\n";
cout<<"Iterative reverse ";
print(&head);
cout<<"\n";
cout<<"Recursive reverse ";
print(&head);

}