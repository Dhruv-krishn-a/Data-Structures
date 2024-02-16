#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    for(int row=0;row<size;row++){
        for(int space=0;space<size-row-1;space++)
            cout<<" ";
        for(int col=0;col<row+1;col++)
        cout<<"* ";
    cout<<endl;
    }
}