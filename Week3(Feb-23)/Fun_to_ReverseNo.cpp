#include<iostream>
using namespace std;
void PrintDigits(int N){
    int Reversed_No=0,remainder;
    while(N!=0){
    int remainder=N%10;
    Reversed_No= Reversed_No*10+remainder;
    N = (N/10);
}

    cout<<Reversed_No<<endl;

    
}
int main(){
    int N;
    cout<<"Enter a Number : ";
    cin>>N;
    PrintDigits(N);
    return 0;
}