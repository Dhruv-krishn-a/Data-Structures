#include<iostream>
using namespace std;

int main(){
    int size,n;
    cin>>n;
    size=n/2;
    for(int row=0;row<size;row++){
        //For upper Triangle spaces
        for(int col=0;col<size-row-1;col++){
            cout<<" ";
        }
        //For upper triangle stars and spaces bw them
        for(int col=0;col<size;col++){
            if(col==0|| col==row)
            cout<<"* ";
            else 
            cout<<"  ";
        }
        cout<<endl;
    }
    for(int row=0;row<size;row++){
    //Printing spaces
    for(int col=0;col<row;col++){
        cout<<" ";
    }
    //Printing stars and Spaces Bw them

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