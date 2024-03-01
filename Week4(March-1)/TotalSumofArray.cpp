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
        cout<<"Total Sum o the array is : "<<endl;
        int totalsum=0;
    for(int i =0;i<size;i++){
        totalsum=totalsum+arr[i];
    }
    cout<<totalsum;

}