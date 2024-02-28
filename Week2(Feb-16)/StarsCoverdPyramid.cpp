#include<iostream>
using namespace std;

int main(){
    int num = 8;
    int size = 4;

    for(int row = 0;row<size;row++){
        //inverted Pyramid 
            for(int col=0;col<size-row;col++){
                cout<<"* ";
                 
        }
        //Full Pyramid 
    for(int col=0;col<2*row+1;col++){
        cout<<"  ";
    }
        //inverted Pyramid
    for(int stars=0;stars<size-row;stars++){
        cout<<"* ";
    }
    cout<<endl;    
    }
    //Part Below
    for(int row = 0;row<size;row++){
        //inverted Pyramid 
            for(int col=0;col<row+1;col++){
                cout<<"* ";
                 
        }
        //Full Pyramid 
    for(int col=0;col<2*size-2*row-1;col++){
        cout<<"  ";
    }
        //inverted Pyramid
    for(int stars=0;stars<row+1;stars++){
        cout<<"* ";
    }
    cout<<endl;    
    }        
    }
