#include<iostream>
using namespace std;

void traversal(int arr[],int u){
    for(int i=0;i<u;i++){
        cout<<"Element "<<i<<" is: "<<arr[i]<<endl;
    }
}
int main(){
    int arr[50]={2,3,5,7,3,2};
    traversal(arr,6);
return 0;
}