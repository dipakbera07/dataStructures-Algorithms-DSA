#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low=0; //here i set the lower index value
    high=size-1; //here i set the highest index value
    while(low<=high){ //it specifies that when the lower index value is equel to higher index value the loop is terminated.
        mid=(low + high)/2; //here we calculated the middle index value of the array
        if(arr[mid]==element){ //here we check that the mid index value is equels to target value or not, if not then move to next condition.
            return mid; //if condition is true then return the mid index value
        }
        if(arr[mid]<element){ //here we are checking that the element is larger or smaller then the mid index value . if larger then then execute the process.... and restart the process. if this condition is not match then move to next
            low=mid+1; //if the condition is true then it make the (mid+1)index as low
        }
        else{ //here we are checking that the element is large or smaller then the mid index value ,if small then execute the process...
            high=mid-1; //if the condition is true then it makes the(mid-1)index as high
        }
    }
    return -1; //if all these condition does not match in the the while loop . then retuns -1. it means the element is not present in the array
}

int main(){
    int arr[]={2,4,5,7,9,12,23,24,27,29,33,55};
    int size=sizeof(arr)/sizeof(int); //
    int element=23;
    int searchIndex=binarysearch(arr,size,element);
    cout<<"The index value is: "<<searchIndex;
return 0;
}