#include<iostream>

using namespace std;
void  PrintPairs(int arr[], int size){
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        cout<<"( "<<arr[i]<<","<<arr[j]<<" )";
    }
cout<<endl;
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

PrintPairs(arr,size);    
}
