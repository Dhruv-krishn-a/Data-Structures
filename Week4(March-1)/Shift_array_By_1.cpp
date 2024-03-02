#include<iostream>

using namespace std;
void  Shift_array(int arr[], int size,int shift){
    if(shift>size){
        shift = shift % size ;
    }

int temp[shift];
for(int i=0;i<shift;i++){
temp[i]=arr[i];
}
for(int i=shift;i<size;i++)
{
arr[i-shift]=arr[i];
}
int j=0;
for(int i=size-shift;i<size;i++){
    
    arr[i]=temp[j];
    j++;
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<", ";
}
}
int main(){
    int size,shift;
    cout<<"Enter the size in the array : "<<endl;
    cin>>size;
    cout<<"Enter the value by which you want to shift the array :"<<endl;
    cin>>shift;
    int *arr = new int[size];
    cout<<"Enter an array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

Shift_array(arr,size,shift);    
}
