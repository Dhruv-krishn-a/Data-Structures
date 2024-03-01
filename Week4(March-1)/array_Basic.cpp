#include<iostream>
using namespace std;

int main(){
//Array Declaration.
    int arr[5];
//Array Initialization
    int brr[]={1,2,3,4,5};
    int crr[5]={2,5}; //All the other values will be initialized with 0 ;
//int drr[2]={2,4,6,8}  -->Error , more value than size ;
/*
    Making dynamic array
    
---> Don't initialize like this 
    
    int n;
    cin>>n;
    int arr[n];
    
---> Use this Methord 

    int n;
    cin n;
    int *arr = new int[n];

*/
//to find base address of array;

    cout<<"base address is : "<<&brr<<endl;

//to find size 

    cout<<" size of arra is : "<<sizeof(brr)<<endl;

//Printing an array ;

    for(int i= 0;i<5;i++){
    cout<<brr[i]<<endl;
    }
    
//A program to take decleare, initialzie, Taking input and Printing output of a Array

// Initialize the array 

cout<<"Enter the size of the array"<<endl;
int n;
cin>>n;
int *array = new int[n];

// Taking Input in the array

cout<<"Enter Elements in the array :"<<endl;
for (int i =0 ;i < n ;i++){    
cin>>array[i];
}

//Printing an array 

cout<<"Elements in the array are :"<<endl;
for (int i =0 ;i < n ;i++){    
cout<<array[i]<<", ";

}

/*
To find the value at a given position in array.
array[i]= Value(Base address +(Datatype Size * index))
*/
int index;
cin>>index;
cout<<"the value of "<<index<<"is : "<<(&array +(sizeof(int)*index));
return 0;

}