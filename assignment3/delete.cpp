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

void Delete(node*& head, int value)
{ 
   if (head==NULL)
   {
       return;
   }
   if(head->data==value){
       node *temp=head;
       head=head->next;
       delete(temp);
       return;
   }
   Delete(head->next,value);
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
cout<<"\n";
Delete(head,3);
print(&head);

}