#include<iostream>
using namespace std;

class stack{
        public:
        char* arr; 
        int top;
        int size;
        stack(int capacity){
            size=capacity;
            top=-1;
            arr=new char[size];
        }
        bool isEmpty(){
            return top==-1;
        }
        bool isFull(){
            return top==size-1;
        }
        char push(char data){
            if(isFull()){
                cout<<"array is full."<<endl;
            }
            arr[++top]=data;
            return top;
        }
        char pop(){
            if(isEmpty()){
                cout<<"Array is EMPTY"<<endl;
            }
            return arr[top--];
        }
};

bool parenthesisMatch(const char* ch){
    stack stack(100);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='('){
            if(stack.isFull()){
                cout<<"Array is Full."<<endl;
            }
            else{
            stack.push(ch[i]);
            }
        }
        else if(ch[i]==')'){
            if(stack.isEmpty()){
                return 0;
            }
            else
            stack.pop();
        }
    }
    return stack.isEmpty();
}


int  main(){
    const char* ch = "(7+(8*(9))";
    if(parenthesisMatch(ch)){
        cout<<"parenthesis is matching."<<endl;
    }
    else{
        cout<<"parenthesis is not matching."<<endl;
    }
    return 0;
}