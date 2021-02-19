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



void split(node* origin, 
                    node** front, node** back) 
{ 
    node* fast; 
    node* slow; 
    slow = origin; 
    fast = origin->next; 
  
    while (fast != NULL) 
    { 
        fast = fast->next; 
        if (fast != NULL) 
        { 
            slow = slow->next; 
            fast = fast->next; 
        } 
    }
    *front = origin; 
    *back = slow->next; 
    slow->next = NULL; 
} 

node* merge(node* head1, node* head2) 
{ 
    node* ans = NULL; 
  
    if (head1 == NULL) 
        return (head2); 
    else if (head2 == NULL) 
        return (head1); 
  
    if (head1->data <= head2->data) { 
        ans = head1; 
        ans->next = merge(head1->next, head2); 
    } 
    else { 
        ans = head2; 
        ans->next = merge(head1, head2->next); 
    } 
    return (ans); 
} 


void sort(node** head) 
{ 
    node* new_node = *head; 
    node* first; 
    node* second; 
  
    if ((new_node == NULL) || (new_node->next == NULL)) 
    { 
        return; 
    } 
  
    split(new_node, &first, &second); 
  
    sort(&first); 
    sort(&second); 
  
    *head = merge(first, second); 
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
push(&head,110);
push(&head,22);
push(&head,10);
push(&head,5);
push(&head,1);



cout<<"Before\n";
print(&head);
cout<<"\nAfter\n";
sort(&head);
print(&head);
}