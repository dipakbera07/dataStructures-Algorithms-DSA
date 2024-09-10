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

class linkedList{
    public:
    // node* head;

    void display(node* head){
        node* ptr=head;
        while(ptr!=NULL){
            cout<<"Element: "<<ptr->data<<endl;
            ptr=ptr->next;
        }
    }
};

node* insertNode(node* head,int data2){ //here we are creating a function which returns a node type pointer
    node* new_node=new node(data2); //here first we created a node type pointer named new_node and initialize it with dinamically allocated memory. we are able to allocate memory dinamically by using new keyword, and then we call node()constructor that we already defined which also takes parameter of int data .
    new_node->next=head; //and this make the connection between the newly added element at the front  with the previous head.

    return new_node; //and here we are returning the new data that we addded at front as new head.
}

int main(){

    linkedList list;
    
    node* head=new node(3);
    node* second=new node(7);
    node* third=new node(9);
    node* fourth=new node(2);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    cout<<"Before Insertion:"<<endl;
    list.display(head);
    cout<<"After Insertion:"<<endl;
    head=insertNode(head,4); //here we update the head value to update the linkedlist . 
    list.display(head);

return 0;
}