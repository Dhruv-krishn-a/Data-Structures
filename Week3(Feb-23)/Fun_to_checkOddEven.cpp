#include<iostream>
using namespace std;
bool isEven(int n){
if((n^1)==n+1){
    return true;
}
else 
return false;
}
int main(){
cout<<"enter a Number to check even or odd  :"<<endl;
int n;
cin>>n;
isEven(n)?cout<<"Even":cout<<"odd";

return 0;
}