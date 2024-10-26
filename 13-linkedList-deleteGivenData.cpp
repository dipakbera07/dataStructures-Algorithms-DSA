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

node* deleteAtgiven(node* head,int key){

    if(head==NULL){
        return head;
    }

    if(head->data==key){
        node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    node* temp=head;
    while(temp->next!=NULL && temp->next->data!=key){
        temp=temp->next;
    }
    node* nodeToBeDeleted=temp->next;
    temp->next=temp->next->next;
    delete nodeToBeDeleted;

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
    head=deleteAtgiven(head,3);
    list.display(head);
return 0;
}