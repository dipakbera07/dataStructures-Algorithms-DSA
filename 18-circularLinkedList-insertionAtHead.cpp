#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int val){
            data=val;
            next=nullptr;
        }
};

void printList(node* head){
    node* ptr=head;
    int i=1;
    do{
        cout<<"Element "<<i<<" : "<<ptr->data<<endl;
        ptr=ptr->next;
        i++;
    }while(ptr!=head);
}

node* insertAtHead(node* head,int element){
    node* ptr=new node(element);
    ptr->next=head;
    node* p=head;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    return ptr;
}

int main(){
    node* head=new node(2);
    node* second=new node(3);
    node* third=new node(4);
    node* fourth=new node(5);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=head;
    cout<<"Before insertion: "<<endl;
    printList(head);
    cout<<"After insertion: "<<endl;
    head=insertAtHead(head,9);
    printList(head);
return 0;
}