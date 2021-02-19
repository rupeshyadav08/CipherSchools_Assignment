
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



node* KReverse(node* head, int k) 
{ 
    stack<node*> mystack; 
    struct node* current = head; 
    struct node* prev = NULL; 
    while (current != NULL) { 
        int count = 0; 
        while (current != NULL && count < k) { 
            mystack.push(current); 
            current = current->next; 
            count++; 
        } 
        while (mystack.size() > 0) { 
  
            if (prev == NULL) { 
                prev = mystack.top(); 
                head = prev; 
                mystack.pop(); 
            } else { 
                prev->next = mystack.top(); 
                prev = prev->next; 
                mystack.pop(); 
            } 
        } 
    } 


int main(){
node* head=NULL;
push(&head,5);
push(&head,4);
push(&head,3);
push(&head,2);
push(&head,1);
cout<<"\n";
print(&head);
cout<<"\n";
KReverse(head);
print(&head);
}