#include<iostream>
using namespace std;

class myArray{
    private:
        int total_size; //here i declare the variable that hold the total size , used size of the array . and a pointer that points to the first element of the array . we can also access other elements in this array using this ptr by using their index number.
        int used_size;
        int *ptr;
    public:
        myArray(int tSize,int uSize); //here i declare a constructor to set the value of total size of the array and how much size we want to use right now.

        myArray(){} //here i declare a default constructor .

        void setData(){ //here i use a for loop to set the valus of an array.
            for(int i=0;i<used_size;i++){
                cout<<"Enter element "<<i<<": ";
                cin>>ptr[i]; // it takes the values of array . here ptr indicates the first elemnt and using index valu we can access every index in this array and also update their valus.
            }
        }

        void getData(){ //in this function i just displayed the value of the array
            for(int i=0;i<used_size;i++){
                cout<<ptr[i]<<endl;
            }
        }
};

myArray :: myArray(int tSize,int uSize){ //this constructor just initialize the parameter to the variables
    total_size=tSize;
    used_size=uSize;
    ptr=new int[total_size]; //here we dinamically allocates memory using new and then we initialize the whole array to the ptr that indicates to the arrays first element.
}

int main(){
    myArray arr(20,5); //here we just declare the valu to the parameterized constructors.
    arr.setData();
    cout<<"Your elements are: "<<endl;
    arr.getData();
return 0;
}