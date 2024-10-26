#include<iostream>
#include<string>
using namespace std;

class stack{
    public:
    int top;
    char* arr;
    int size;
    stack(int val){
        size=val;
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
char infixToPostfix(string sh){
    for(int i=0;i<sh.length();i++){
        
    }
}

int main(){
    
return 0;
}