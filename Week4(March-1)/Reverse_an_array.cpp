#include<iostream>

using namespace std;
//this Approach uses temp array and is bad for large values as it eats space;
void  ReverseArray(int arr[], int size){
int length = size-1 ;
int temp[size];
for(int i =0;i<size;i++){
    temp[length]=arr[i];
    length--;
}
cout<<"Elements in the array are :"<<endl;
for (int i =0 ;i < size ;i++){    
cout<<temp[i]<<", ";

}
}
int main(){
    int size;
    cout<<"Enter the size in the array : "<<endl;
    cin>>size;

    int *arr = new int[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

ReverseArray(arr,size);    
}
