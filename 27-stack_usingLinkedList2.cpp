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
class stack{
    public:
        node* top;
        stack(){
            top=nullptr;
        }

        int isFull(){
            node* ptr=new node(2);
            if(ptr==nullptr){
                return 1;
            }
            else{
                delete ptr;
                return 0;
            }
        }

        int isEmpty(){
            if(top==nullptr){
                return 1;
            }
            else{
                return 0;
            }
        }

        node* push(int data){
            node* ptr=new node(data);
            if(isFull()){
                cout<<"List is Full."<<endl;
            }
            else{
                ptr->next=top;
                top=ptr;
                return top;
            }
        }

        node* pop(){
            node* ptr=top;
            if(isEmpty()){
                cout<<"List is EMPTY."<<endl;
            }
            else{
            top=ptr->next;
            delete(ptr);
            return top;
            }
        }

        void display(){
            node* ptr=top;
            while(ptr!=nullptr){
                cout<<"Element: "<<ptr->data<<endl;
                ptr=ptr->next;
            }
        }

        void peek(int index){
            node* ptr=top;
            for(int i=0;i<index && ptr!=nullptr;i++){
                ptr=ptr->next;
            }
            cout<<"Element at index "<<index<<" is: "<<ptr->data<<endl;
        }
        void top_1(){
            cout<<"Top element is: "<<top->data<<endl;
        }
        void bottom(){
            node* ptr=top;
            while(ptr!=nullptr){
                ptr=ptr->next;
                if(ptr->next==nullptr){
                    cout<<"Element in the bottom of the stack is: "<<ptr->data<<endl;
                }
            }
        }
};

int main(){
    stack stack;
    cout<<"After push operation: "<<endl;
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.display();
    cout<<"After pop operation:"<<endl;
    stack.pop();
    stack.display();
    stack.peek(1);
    stack.top_1();
    stack.bottom();
return 0;
}