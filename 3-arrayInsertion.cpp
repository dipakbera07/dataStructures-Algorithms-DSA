#include<iostream>
using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Element "<<i<<" is: "<<arr[i]<<endl;
    }
}


int traversal(int arr[],int size,int index,int element,int capacity){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}

int main(){
    int arr[50]={3,5,2,7,66,88};
    int size=6,index=2,element=33,capacity=50;
    traversal(arr,size,index,element,capacity);
    size +=1;
    display(arr,size);

return 0;
}