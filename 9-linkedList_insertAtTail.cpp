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

node* insertAtTail(node* head,int new_data){
    node* ptr=new node(new_data);
    
    if(head==NULL){ //here we are checking if the linkedlist head ==NULL it means it an empty linkedlist.
        return ptr; //so we return the ptr means newly created node ,as head node
    }
    node* last=head; //here we are making a temporary pointer.

    while(last->next!=NULL){ //here we are checking a condition that if the pointers->next element != NULL then continue the loop .
        last=last->next; //after checking the condition it updates the last pointer to last->next. it helps to traverse the linkedklist by updating the pointer position every time.
    }
    // until the point reached to the position where the pointers->next element ==NULL then terminate the loop . it means the pointer is now at the last positin of the linkedlist

    last->next=ptr; //here it makes the connection between the last node with the last->next node or the newly created node at the tail.
    ptr->next=NULL; //it makes the connection between new node with the NULL;
    return head;
}

int main(){
    printList list;
    
    node* head=new node(3);
    node* second=new node(4);
    node* third=new node(5);
    node* fourth=new node(6);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    cout<<"Before Insertion: "<<endl;
    list.display(head);
    cout<<"After Insertion: "<<endl;
    head=insertAtTail(head,7);
    list.display(head);

return 0;
}