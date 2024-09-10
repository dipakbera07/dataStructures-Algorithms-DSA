#include<iostream>
using namespace std;

class stack{
    public:
        int size;
        int* arr;
        int top;

        stack(int capacity){
            size=capacity;
            top=-1;
            arr=new int[size];
        }

        ~stack(){
            delete[] arr;
        }

        bool isEmpty(){
            return top==-1;
        }
        bool isFull(){
            return top==size-1;
        }

        void push(int data){
            if(isFull()){
                cout<<"OverFlow condition, The list is FULL."<<endl;
            }
            arr[++top]=data; 
            cout<<data<<" pushed onto the stack."<<endl;    
        }
        int pop(){
            if(isEmpty()){
                cout<<"UnderFlow condition, The list is EMPTY."<<endl;
            }
            return arr[top--]; //here arr[top--] indicitaing that - return arr[top] index value and decrese the the the value of top by 1.it means it first show the arr[top]index value then decrese the value of top index by 1;
            cout<<endl;
        }
        int peek(){
            if(isEmpty()){
                cout<<"The list is EMPTY."<<endl;
            }
            return arr[top];
        }
        void display(){
            cout<<"The final list is: ";
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
        }
};

int main(){
    stack stack(5);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    cout<<stack.pop()<<" popped from stack."<<endl; 
    stack.display();
    cout<<endl;
    cout<<"The element at the top: "<<stack.peek();
    cout<<endl;
    cout<<"The list is full or not: "<< stack.isFull();
return 0;
}