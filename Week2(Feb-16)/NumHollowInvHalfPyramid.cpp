#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size :"<<endl;
    cin>>size;
    for(int row=0;row<size;row++){
        for(int col=0;col<size-row;col++){
            if(row == 0 || col == size-row-1 || col == 0)
            cout<<col+1<<" ";
            else 
            cout<<"  ";
        }
    cout<<endl;
    }
}