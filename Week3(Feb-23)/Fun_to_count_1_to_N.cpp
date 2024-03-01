#include<iostream>
using namespace std;
void Count(int n){
    for(int i=0;i<=n;i++){
        cout<<i<<endl;
    }
} 
int main(){
    int n;
    cout<<"Enter a Number";
    cin>>n;
    Count(n);
    return 0;
}