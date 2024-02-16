#include<iostream>
using namespace std; 
int main(){
    int size;
    cin>>size;
    for(int row=0;row<=size;row++){
        for(int col=0;col<=size;col++){
            if(row==0 || row==size){
                cout<<"* ";
            }
            else
            if(col==0 || col==size){
                cout<<"* ";
            }
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}