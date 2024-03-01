#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter the elements of array :  "<<endl;

    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    int key,flag=0,index;
    cout<<"enter element to search in array :"<<endl;
    cin>>key;
    for(int i =0;i<size;i++){
    if(arr[i]==key){
        flag =1;
        index=i;
    }        
    }
    if(flag==1){
    cout<<"Element found at index : "<<index<<endl;
    }
    else 
    cout<<"Element not found in the array :"<<endl;
    return 0;

}