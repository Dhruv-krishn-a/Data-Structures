#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size :"<<endl;
    cin>>size;
    for(int row=0;row<size;row++){
        //for spaces 
        for(int space = 0 ; space <size-row-1 ; space++){
            cout<<"  ";
        }
        //for Pattern 1
        for(int col = 0 ; col< row+1; col++ ){
            cout<<col+1<<" ";
        }
       
        //for Pattern 2
        int print = row;
        for(int col = 0 ; col< row; col++ ){
            cout<<print<<" ";
            print--;
        }
       cout<<endl;  
    }
}