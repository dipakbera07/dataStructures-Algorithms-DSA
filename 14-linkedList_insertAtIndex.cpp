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

node* insertAtPosition(node* head,int position,int new_data){
    node* ptr=new node(new_data);
 
    if(position==1){ //here i just checked that if the postion is given as 1 means it wants to add a node at head so we can just easyly make a link between new node and previous head;
        ptr->next=head;
        head=ptr;
        return head;
    }
    node* temp=head;
    for(int i=1;i<position-1 && temp!=NULL; i++){ //here i declared a for loop in this i started the loop from i=1 , then condition is i have to be less then position-1 ,means i need the pointr at the end before the position , that helps me to make links better;
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;

    return head;
}

int main(){
    printList list;
    
    node* head=new node(2);
    node* second=new node(3);
    node* third=new node(4);
    node* fourth=new node(6);
    node* fifth=new node(7);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    cout<<"Before Insertion: "<<endl;
    list.display(head);
    cout<<"After Insertion: "<<endl;
    head=insertAtPosition(head,2,5);
    list.display(head);
return 0;
}