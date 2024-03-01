#include<iostream>

using namespace std;
void  ExtremePrint(int arr[], int size){
int i=0,j=size-1;
while(i<=j){
    if(i==j)
    cout<<arr[i]<<" ";
    else{
    cout<<arr[i]<<", ";
    cout<<arr[j]<<", ";  
    }
    i++,j--;
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

ExtremePrint(arr,size);    
}
