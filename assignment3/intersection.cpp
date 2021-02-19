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
int count(node* head)
{
    node* temp = head;
    int c = 0;
 
    while (temp != NULL) {
        c++;
        temp = temp->next;
    }
 
    return c;
}

int find_intersection( node* head1, node* head2,int n)
{
    node* first = head1;
    node* second = head2;
 
    for (int i = 0; i < n; i++) {
        if (first == NULL) {
            return -1;
        }
        first = first->next;
    }
 
    
    while (first != NULL && second != NULL) {
        if (first == second){
            return first->data;
            }
 
        first = first->next;
        second = second->next;
    }
 
    return -1;
}



int intersection(node* head1,node* head2)
{
   
    int a = count(head1);
    int b = count(head2);
    int d;
 
    if (c1 > c2) {
        d = c1 - c2;
        return find_intersection(head1, head2,d);
    }
    else {
        d = c2 - c1;
        return find_intersection(head2, head1,d);
    }
}





int main(){
node* head=NULL;
push(&head,30);
push(&head,15);
push(&head,9);
push(&head,6);
push(&head,3);


node* head2 = NULL;
push(&head2,30);
push(&head2,15);
push(&head2,10);


cout<<intersection(head,head2);

}