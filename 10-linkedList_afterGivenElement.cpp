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

node* insertAfterGiven(node* head,int key,int new_data){
    node* ptr=new node(new_data);
 
    node* mid=head;
    while(mid!=NULL && mid->data!=key){
        mid=mid->next;
    }

    ptr->next=mid->next;
    mid->next=ptr;

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
    head=insertAfterGiven(head,4,5);
    list.display(head);
return 0;
}