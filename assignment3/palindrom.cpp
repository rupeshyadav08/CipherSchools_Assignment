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

}

bool palindrom(node* head){   
        node* ptr= head;
        stack <int> s; 
        while(ptr != NULL){
                s.push(ptr->data);
                ptr = ptr->next;
        }
        while(head != NULL ){
             
             int curr=s.top(); 
             s.pop();
            if(head -> data != curr){
                return false;
            }
           head=head->next;
        }
        return true;
    // vector<int> stack;
    // stack=reverse(&head);
    // node* ptr=head;
    // while(ptr!=NULL){
    //     stack.push_back(head->data);
    //     ptr=ptr->next;
    // }
    // for(auto& itr:stack){
        
    //     if(head->data!=itr){
    //         return false;
    //     }
    //     head=head->next;
    // }
    
}



int main(){
node* head=NULL;
push(&head,1);
push(&head,2);
push(&head,3);
push(&head,2);
push(&head,1);
print(&head);
cout<<"\n";
if(palindrom(head)){
    cout<<"It is a palindrom"<<"\n";
}
else{
    cout<<"It is not a palindom"<<"\n";
}
}