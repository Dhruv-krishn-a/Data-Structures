#include<iostream>
using namespace std;
void pattern();
int row,col,n;
int main(){
    cin>>n;
    pattern();
}

void pattern(){
for(row=0;row<n;row++){
    for(col=n-1;col>=row;col--)
        cout<<"*";
cout<<endl;        
}
}