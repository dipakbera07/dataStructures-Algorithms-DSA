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

class printlist{
    public:
        void display(node* head){
            node* temp=head;
            while(temp!=NULL){
                cout<<"Element: "<<temp->data<<endl;
                temp=temp->next;
            }
        }
};

node* nodeCount(node* head){
    node* ptr=head;
    for(int i=1;ptr!=NULL;i++){
        if(ptr->next==NULL){
            cout<<"Total node present in this LinkedList: "<<i<<endl;
        }
        ptr=ptr->next;
    }
    // cout<<"Total node present in this LinkedList: "<<i<<endl;

}

int main(){
    printlist list;

    node* head=new node(2);
    node* second=new node(3);
    node* third=new node(4);
    node* fourth=new node(5);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    nodeCount(head);

return 0;
}