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

node* insertAfterGiven(node* head,int given_val,int new_data){
    node* ptr=new node(new_data);
    node* p=head;
    while(p->data!=given_val && p->next!=head){
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
    head=insertAfterGiven(head,4,99);
    printList(head);
return 0;
}