#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class printList{
    public:
        void display(node* head){
            node* ptr=head;
            while(ptr!=NULL){
                cout<<"Element: "<<ptr->data<<endl;
                ptr=ptr->next;
            }
        }
};

node* deleteAtTail(node* head){

    if(head==NULL){
        return NULL;
    }

    if(head->next==NULL){
        delete head;
        return NULL;
    }

    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete (temp->next);
    temp->next=NULL;
    return head;
}

int main(){
    printList list;

    node* head=new node(2);
    node* second=new node(3);
    node* third=new node(4);
    node* fourth=new node(5);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    cout<<"Before Deletion:"<<endl;
    list.display(head);
    cout<<"After Deletion:"<<endl;
    head=deleteAtTail(head);
    list.display(head);
return 0;
}