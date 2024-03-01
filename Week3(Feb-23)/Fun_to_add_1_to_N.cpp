#include<iostream>
using namespace std;
int SumOfAll(int num){
int sum =0;
for(int i=0;i<=num;i++){
    sum=sum+i;
}
return sum;
}

int main(){
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    int TotalSum = SumOfAll(num);
    cout<<"Total sum is :"<<TotalSum<<endl;
    return 0;
}