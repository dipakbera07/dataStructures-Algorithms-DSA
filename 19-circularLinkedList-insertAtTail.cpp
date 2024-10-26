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
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
        i++;
    }while(ptr!=head);
    cout<<endl;
}

node* insertAttail(node* head,int element){
    node* ptr=new node(element);
    node* p=head;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;
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
    head=insertAttail(head,9);
    printList(head);
return 0;
}