#include<iostream>
using namespace std;

int linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[50]={2,4,2,4,77,54,3,4,65,3,77,4,3};
    int size=sizeof(arr)/sizeof(int);
    // int element=78;
    int searchIndex=linearsearch(arr,size,54);
    cout<<"The index value of  element is: "<<searchIndex;

return 0;
}