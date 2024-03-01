#include<iostream>

using namespace std;
void  MinValue(int arr[], int size){
int newMin = __INT_MAX__,index;
for( int i=0;i<size;i++){
    if(newMin>arr[i]){
        newMin=arr[i];
        index = i;
    }
}
cout<<"Minimum Elment in the array is : "<<newMin<<"at index :"<<index<<endl;
}
int main(){
    int size;
    cout<<"Enter the size in the array : "<<endl;
    cin>>size;

    int *arr = new int[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

MinValue(arr,size);    
}
