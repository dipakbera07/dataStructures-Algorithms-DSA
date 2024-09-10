#include<iostream>
using namespace std;
#define max 100
class stack{
    public:
        int arr[max];
        int top=-1;

        bool isEmpty(){
            return top==-1;
        }
        bool isFull(){
            return top==max-1;
        }
        void push(int val){
            if(isFull()){
                cout<<"stack is OverFlow."<<endl;
            }
            arr[++top]=val;
        }
        void display(){
            for(int i=0;i<=top;i++){
                cout<<"Element : "<<arr[i]<<" pushed onto stack."<<endl;
            }
        }
};

int main(){
    stack stack;
    stack.push(2);
    stack.push(34);
    stack.push(25);
    stack.display();
return 0;
}