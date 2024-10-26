#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};

bool isFull(node *top)
{
    node *ptr = new node(1);
    if (ptr == nullptr)
    {
        return 1;
    }
    else
    {
        delete ptr;
        return 0;
    }
}
bool isEmpty(node *top)
{
    return top == nullptr;
}

node *push(node *top, int data)
{
    node *ptr = new node(data);
    if (isFull(top))
    {
        cout << "List is Full." << endl;
    }
    else
    {
        ptr->next = top;
        top = ptr;
        return top;
    }
}
node *pop(node *top)
{
    if (isEmpty(top))
    {
        cout << "Underflow Condition." << endl;
    }
    node *ptr = top;
    top = top->next;
    delete ptr;
    return top;
}

void display(node *top)
{
    node*ptr=top;
    while(ptr!=nullptr){
        cout<<"Element: "<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    node *top=nullptr;
    top=push(top,2);
    top=push(top,3);
    top=push(top,4);
    top=push(top,5);
    display(top);
    cout<<"After poping elements: "<<endl;
    top=pop(top);
    display(top);
    return 0;
}