#include<iostream>
using namespace std;
void CheckPrime(int num){
    int flag = 0;// using dutch flag approach
    if(num==1){
        cout<<num<<" is a Prime no";
    }
    else{
    for(int i=2 ;i<num;i++){
        if(num%i==0){
            flag=1;
            break;
        }    
    }
    if(flag==0){
        cout<<num<<" is a Prime Number ";
    }
    else 
    cout<<num<<" is not a Prime No";
}
}

int main(){
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    CheckPrime(num);
    return 0;
}