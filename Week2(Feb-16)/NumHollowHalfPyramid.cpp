#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size :"<<endl;
    cin>>size;
    for(int row=0;row<size;row++){
        for(int col=0;col<=row;col++){
            if(col == 0||col == row || row == size-1)
            cout<<col+1<<" ";
            else 
            cout<<"  ";
        }

    cout<<endl;
    }
}