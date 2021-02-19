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

  
node* Ksort(node* head, int k)
{
    if (head==NULL)
    {
        return NULL;
    }
    node* current = head;
    node* front = NULL;
    node* prev = NULL;
    int count_node = 0;
 
    while (current != NULL && count_node < k) {
        front = current->next;
        current->next = prev;
        prev = current;
        current = front;
        count_node++;
    }
 

    if (front != NULL)
        head->next = Ksort(front, k);
 
    return prev;
}

int main(){
node* head=NULL;
push(&head, 9);
push(&head, 8);
push(&head, 7);
push(&head, 6);
push(&head, 5);
push(&head, 4);
push(&head, 3);
push(&head, 2);
push(&head, 1);

node* res=NULL;
cout<<"Before\n";
print(&head);
cout<<"\nAfter\n";
res=Ksort(head,3);
print(&res);
}