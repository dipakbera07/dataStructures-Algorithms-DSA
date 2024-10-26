#include<iostream>
using namespace std;

class node{ //here i creared a node . basically this  refers to every single node in a linked list. here i created a base structure for every node, like every node contains data and the address of next node.
    public:
        int data; 
        node* next;

        node(int val){ //here i define a constructor , that helps me to create node by passing value to it 
            data=val;
            next=NULL;
        }
};

class linkedList{ //here i created a class to print elements of likedlist.
    public:
        node* head;
void display(){ //this is the actual function for displaying the elements of a linkedlist.
    while(head!=NULL){ //here we specified a condition that , if the head is not equel to NULL then continue the loop.
        cout<<"Element: "<<head->data<<endl;
        head=head->next; //after checking head is not equel to NULL it updates the head position to the next node, basically first the head pointer points to the first node of the linkedlist then the head position updated to the next to and this process continues until head is equels to NULL;after that this loop terminated automatically.
    }
}
};

int main(){
    linkedList list; //here i created a object of class linkedlist.
    node* first=new node(4);
    node* second=new node(6); //here i dinamically allocates memory for each node in the linkedlist separately.
    node* third=new node(9); //in this line first i take a node type pointer named third and then initialize it with dinamically allocated memory. by using new key word we are able to allocate memory dinamically, and then we call node constrctor that we created previously, and also this takes parameter of int data type.

    list.head=first; //here we are linking each node with its next node. to establish the connection.
    first->next=second;
    second->next=third;
    third->next=NULL;

    list.display(); //here we are displaying the elements or nodes of a linkedlist.

return 0;
}