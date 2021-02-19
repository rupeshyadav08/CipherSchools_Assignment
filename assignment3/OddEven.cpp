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



node* rearrange(node* head){
    if(head==NULL){
        return head;
    }
    node* EvenPos=head;
    node* OddPos=head->next;
    node* OddHead=OddPos;
    while (OddPos!=NULL){
        if (EvenPos==NULL || OddPos==NULL || EvenPos->next==NULL){
            EvenPos->next=OddHead;
        }
        EvenPos->next=OddPos->next;
        EvenPos=OddPos->next;

        if (EvenPos->next==NULL){
            OddPos->next=NULL;
            EvenPos->next=OddHead;
            break;
        }
        OddPos->next=EvenPos->next;
        OddPos=EvenPos->next;
    }
    return head;

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
rearrange(head);
print(&head);
}