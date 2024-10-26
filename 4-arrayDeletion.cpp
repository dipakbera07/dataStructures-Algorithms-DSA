#include<iostream>
using namespace std;

void display(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<"Element "<<i<<" :is: "<<arr[i]<<endl;
    }
}

//by using this deletion operation we are actually not able to delete an elemnt .we achieve the effect of deletion by shifting elements to overwrite the position of the deleted element.
void deletion(int arr[],int size , int index){ //here we take parameters that are required for deletion.
    for(int i=index;i<size-1;i++){ //by using this loop we are filling the void space by moving backward until the index value reached that has to be deleted.
        arr[i]=arr[i+1];
    }
    
}

int main(){
    int arr[50]={3,5,7,2,4,6};
    int size=6;
    deletion(arr,size,3);
    size -=1;
    display(arr,size);
return 0;
}