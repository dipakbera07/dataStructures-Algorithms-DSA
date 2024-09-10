#include<iostream>
using namespace std;

class stack{
    public:
        int top;
        static const int size=20;
        int arr[size];
        stack(){
            top=-1;
        }
        bool isEmpty(){
            return top==-1;
        }
        bool isFull(){
            return top==size-1;
        }
        void push(int data){
            if(isFull()){
                cout<<"OverFlow Condition."<<endl;
            }
            arr[++top]=data;
            cout<<"Element "<<data<<" pushed in the stack."<<endl;
        }
        int pop(){
            if(isEmpty()){
                cout<<"UnderFlow Condition."<<endl;
            }
            return arr[top--];
        }
        int peek(int index){
            if(isEmpty()){
                cout<<"Stack is EMPTY."<<endl;
            }
            if(arr[index]==arr[top]){
            return arr[top];
            }
            else{
            for(int i=0;i<=top;i++){
                if(i==index){
                    cout<<"Index "<<i<<" has element: "<<arr[i]<<endl;
                }
            }
            }
        }
        int display(){
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        void top_2(){
            cout<<"top most element is:"<<arr[top]<<endl;
        }
        void bottom(){
            cout<<"bottom element is: "<<arr[0]<<endl;
        }
};
int main(){
    stack stack;
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    cout<<"Element "<<stack.pop()<<" poped from the stack."<<endl;
    cout<<"Final List is: ";
    stack.display();
    cout<<"Index Element: "<<stack.peek(2)<<endl;
    stack.top_2();
    stack.bottom();
return 0;
}