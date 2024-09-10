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

node* insertAtIndex(node* head,int element,int index){
    node* ptr=new node(element);
    node* p=head;
    for(int i=0;i<index-1;i++){
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
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
    sixth->next=head;
    cout<<"Before insertion: "<<endl;
    printList(head);
    cout<<"After insertion: "<<endl;
    head=insertAtIndex(head,9,3);
    printList(head);
return 0;
}