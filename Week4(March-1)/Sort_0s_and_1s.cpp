#include<iostream>

using namespace std;
void  Sort0s_and_1s(int arr[], int size){
int count_of1s =0;  
for(int i=0;i<size;i++){
    if(arr[i]==1){
        count_of1s++;
        arr[i]=0;
    }   
}
for(int j=size-count_of1s;j<size;j++){
    arr[j]=1;
}
cout<<"The sorted array is : "<<endl;
for(int i =0;i<size;i++){
    cout<<arr[i]<<", ";

}
}

int main(){
    int size;
    cout<<"Enter the size in the array : "<<endl;
    cin>>size;

    int *arr = new int[size];
    cout<<"Enter an array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

Sort0s_and_1s(arr,size);    
}
