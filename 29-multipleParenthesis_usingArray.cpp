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

int match(char a,char b){
    if(a=='(' && b==')'){
        return 1;
    }
    else if(a=='{' && b=='}'){
        return 1;
    }
    else if(a=='[' && b==']'){
        return 1;
    }
    else{
        return 0;
    }
}

bool multipleParenthesisMatch(const char* ch){
    stack stack(100);
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='(' || ch[i]=='{'|| ch[i]=='['){
            if(stack.isFull()){
                return false;
            }
            else{
            stack.push(ch[i]);
            }
        }
        else if(ch[i]==')' || ch[i]=='}' || ch[i]==']'){
            if(stack.isEmpty()){
                return false;
            }
            else {
            // stack.pop();
            char poped= stack.pop();
            if(!match(poped,ch[i])){
                return false;
            }
            
            }
        }
    }
    return stack.isEmpty();
}


int  main(){
    const char* ch = "[2*4(9-3)]"; 
    // string ch="[3*5{3+(4-7)}]";  ---we can also use this instead of using const char* ch = "[2*4(9-3)]";
    // by using this we dont have to make any char as const also dont need to make a pointer , we are able to that by using #inclue<string> in the beginning.
    
    if(multipleParenthesisMatch(ch)){
        cout<<"parenthesis is matching."<<endl;
    }
    else{
        cout<<"parenthesis is not matching."<<endl;
    }
    
    return 0;
}