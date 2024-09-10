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

node* nodeSearch(node* head,int element){
    node* ptr=head;
    for(int i=1; i!=element && ptr!=NULL; i++){
        if(ptr->data==element){
            cout<<"Element found at position: "<<i<<endl;
            break;
        }
        ptr=ptr->next;
    }



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

    list.display(head);
    nodeSearch(head,4);

return 0;
}