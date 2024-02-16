#include<iostream>
using namespace std;
void pattern();
int row, col,n;

int main(){
    cin>>n;
pattern();
}
void pattern(){
    for(row=0;row<n;row++){
        for(col=0; col<row+1;col++)
        cout<<col ;

    cout<<endl;
    }
    
}