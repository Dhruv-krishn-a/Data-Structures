#include<iostream>

using namespace std;
void  Count(int arr[], int size){
int ZeroCount= 0,OneCount = 0;
for(int i=0;i<size;i++){
    if(arr[i]==0){
        ZeroCount++;
    }
    else
    OneCount++;
}
cout<<"Count of Zeros are : "<<ZeroCount<<endl;    
cout<<"Count of Ones are :"<<OneCount<<endl;
}
int main(){
    int size;
    cout<<"Enter the size in the array : "<<endl;
    cin>>size;

    int *arr = new int[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

Count(arr,size);    
}
