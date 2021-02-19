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

void duplicate(node* head) 
{  
    node* copy = new node; 
    copy->next = head; 
    node* prev = copy; 
    node* curr = head; 
  
    while(curr != NULL) 
    { 
        while((curr->next != NULL) && (prev->next -> data == curr -> next->data) )
        {
            curr = curr->next; 
            }

        if (prev->next == curr) 
        {

            prev = prev->next; 
            }
        else
        {
            prev-> next = curr->next;
             }
        curr = curr->next; 
    } 
    head = copy -> next; 
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
push(&head,3);
push(&head,3);
push(&head,2);
push(&head,2);
push(&head,1);
cout<<"before removal of dupliacte ";
print(&head);
cout<<"\nafter duplicate removal ";
duplicate(head);
print(&head);
}