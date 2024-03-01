#include<iostream>
using namespace std;
void Prime1toN(int N){
    cout<<"All the Prime nos b/w 3 to "<<N<<" are :"<<endl;
    for(int OutLoop =3;OutLoop<=N;OutLoop++){
        int flag = 0 ;
        for(int Inloop=2;Inloop<OutLoop;Inloop++){
        if(OutLoop%Inloop==0){
            flag=1;
            break;
        }
        }
    if(flag==0)
    cout<<OutLoop<<",";
    }

}
int main(){
    int N;
    cout<<"Enter a Number : "<<endl;
    cin>>N;
    Prime1toN(N);
    return 0;

}