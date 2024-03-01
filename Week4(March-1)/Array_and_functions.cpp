#include<iostream>
using namespace std;

void array_output(int size){
int *arr = new int[size];
cout<<"Enter the elements of array :  "<<endl;

    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    
cout<<"Elements in the array are :"<<endl;

    for (int i =0 ;i < size ;i++){    
        cout<<arr[i]<<", ";
    }
return;
}
int main(){
    int size;
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    array_output(size);
}