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
    if(head==nullptr){
        cout<<"List is empty."<<endl;
    }
    node* temp=head;
/*
    ******HERE WE ARE PRINTING SAME THING BY USING WHILE LOOP****
    cout<<"Element: "<<temp->data<<endl; //we are just moving the temp pointer one step ahead, to ensure that the loop start the execution, otherwise it will not start cause as we write the condition is temp!=head , but we already declared that head==temp. so the loop not start its execution. thats why we move it one step forward.
    temp=temp->next;
    while(temp!=head){
        cout<<"Element: "<<temp->data<<endl;
        temp=temp->next;
    }
*/
    do{
        cout<<"Element: "<<temp->data<<endl;
        temp=temp->next; //by using this loop we dont have to face this previous problem that we faced by using while loop, here before checking the condition we are moving the temp pointer one step forward.
    }while(temp!=head); //after already moving the temp to next we are checking the condition so the conditions result is true, and the loop also started until it finds head back .
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

    printList(head);
return 0;
}