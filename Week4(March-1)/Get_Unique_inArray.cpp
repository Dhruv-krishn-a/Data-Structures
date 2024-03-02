#include<iostream>

using namespace std;
int GetUniqueElement(int arr[], int size){
int ans=0;
for(int i=0;i<size;i++){
    ans = ans^arr[i];
}
return ans;
}
int main(){
    int size;
    cout<<"Enter the size in the array : "<<endl;
    cin>>size;

    int *arr = new int[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

int Result = GetUniqueElement(arr,size);   

cout<<"The Unique element is : "<<Result<<endl;
 
}
