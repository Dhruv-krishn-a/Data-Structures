#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    for(int row = 0;row < size ; row++){
        //printing spaces
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //Printing Stars and spaces bw them
        int totalcol=size-row;
        for(int col=0;col<totalcol;col++){
            if(col==0||col==totalcol-1)
            cout<<"* ";
            else 
            cout<<"  ";
        }
        cout<<endl;
    }
}