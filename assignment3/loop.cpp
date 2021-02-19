#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};

bool loop(node* head){
    node* fast=head;
    node* slow=head;
    while (slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

void loop_removal(struct node* loop_node, struct node* head)
{
    struct node* first_point;
    struct node* second_point;
 
   
    first_point = head;
    while (true) {
    
        second_point = loop_node;
        while (second_point->next != loop_node
               && second_point->next != first_point)
            second_point = second_point->next;
 
 
        if (second_point->next == first_point)
            break;
 
        first_point = first_point->next;
    }
 
   
    second_point->next = NULL;
}
 


bool DetectLoopRemove(node* head){
    node* fast=head;
    node* slow=head;
    while (slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            loop_removal(slow,head);
        }
    }
    return false;

}

node* push(node** head,int newdata){
    node* newnode=new node();
    newnode->data=newdata;
    newnode->next=*head;
    *head=newnode;
    return newnode;
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
push(&head,1);
head->next->next->next->next = head;
cout<<loop(head);
cout<<"\nWith Loop linked list \n";
DetectLoopRemove(head);
cout<<"After Loop Removal \n";
print(&head);
}