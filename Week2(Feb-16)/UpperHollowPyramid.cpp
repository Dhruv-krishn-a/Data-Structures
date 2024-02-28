#include<iostream>
using namespace std;

 int main(){
    int size;
    cin>>size;
    
    for(int row =0; row < size; row++){
//space
    for(int col =0;col< size-row-1; col++){
        cout<<" ";
    }
//stars
    for(int col=0; col<row+1; col++ ){
        //Print stars for first and last col
        if(col == 0 || col == row)
        cout<<"* "; 
        
        else
        cout<<"  ";
    }
    cout<<endl;
    }
    
}


   