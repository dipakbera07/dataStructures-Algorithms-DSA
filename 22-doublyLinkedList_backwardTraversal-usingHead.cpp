#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;
        node(int val){
            data=val;
            next=prev=nullptr;
        }
};

void display(node* head){
    node* ptr=head;
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

node* backTraversal(node* head){
    node* curr=head;
    node* temp=nullptr;

    while(curr!=nullptr){
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;

        curr=curr->prev;
    }
    if(temp!=nullptr){
        head=temp->prev;
    }
    return head;
}

int main(){
    node* head=new node(2);
    node* second=new node(3);
    node* third=new node(4);
    node*fourth=new node(5);
    node*fifth=new node(6);
    head->next=second;
    head->prev=nullptr;
    second->next=third;
    second->prev=head;
    third->next=fourth;
    third->prev=second;
    fourth->next=fifth;
    fourth->prev=third;
    fifth->next=nullptr;
    fifth->prev=fourth;
    cout<<"Here is the doubly LinkedList: ";
    display(head);
    cout<<"Doubly LinkedList after reversal: ";
    head=backTraversal(head);
    display(head);

return 0;
}