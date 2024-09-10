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

void display(node* top){
    node* ptr=top;
    while(ptr!=nullptr){
        cout<<"Element is: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

//********       isEmpty operation in stack using LinkedList        ************** */
int isEmpty(node* top){
    if(top==nullptr){
       return 1;
    }
    else
        return 0;
}

int isFull(node* top){
    node* ptr=new node(3);
    if(ptr==nullptr){
        return 1;
    }
    else{
        delete(ptr);
        return 0;
    }
}

node* peek(node* top,int index){
    // cout<<"Element at top of the stack is: "<<top->data<<endl;
    node* ptr=top;
    
    for(int i=1;i<index;i++){
        ptr=ptr->next;
    }
    cout<<"value at index "<<index<<" is: "<<ptr->data<<endl;

}

//********      push operation in stack using LinkedList     ************** */
node* push(node* top,int data){
    node* ptr=new node(data);
    ptr->next=top;
    top=ptr;
    return top;
    }


//********       pop operation in stack using LinkedList     ************** */
node* pop(node* top){
    node* ptr=top;
    top=ptr->next;
    delete(ptr);
    return top;
}

int main(){
    node* top=nullptr;
    top=push(top,3);
    top=push(top,4);
    top=push(top,6);
    top=push(top,7);
    top=push(top,8);
    display(top);
    cout<<"After pop operation:"<<endl;
    top=pop(top);
    display(top);
    isFull(top);
    peek(top,1);
return 0;
}