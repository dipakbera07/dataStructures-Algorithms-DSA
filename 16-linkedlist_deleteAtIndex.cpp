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
    while(ptr!=nullptr){
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

node* deleteAtIndex(node* head,int index){
    node* p=head;
    for(int i=0;i<index-1;i++){
        p=p->next;
    }
    node* q=p->next;
    p->next=q->next;
    delete q;
    return head;
}


int main(){
    node* head=new node(2);
    node* second=new node(3);
    node* third=new node(4);
    node* fourth=new node(5);
    node* fifth=new node(6);
    node* sixth=new node(7);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    cout<<"Before Deletion: "<<endl;
    printList(head);
    cout<<"After Deletin: "<<endl;
    head=deleteAtIndex(head,4);

    printList(head);
return 0;
}