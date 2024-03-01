#include<iostream>
using namespace std;
void fact(int num){
    int Ans=0;
    for(int i=1;i<=num;i++){
    Ans = Ans + i;
    }
    cout<<"Factorial of " << num << " is : " << Ans<<endl; 
}
int main(){
    cout<<"Enter a Number : ";
    int num;
    cin>>num;
    fact(num);
    return 0;
}