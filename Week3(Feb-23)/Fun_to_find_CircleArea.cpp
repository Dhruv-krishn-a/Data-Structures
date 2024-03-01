#include<iostream>
#include<iomanip> // Include the iomanip header for setprecision
using namespace std;
const double pi=3.14159265359;
void Area(double r){
    double area = pi*r*r;
    cout<<"Area of the circle is : "<<endl<<fixed<<setprecision(10)<<area;//upto 10 decimal places, we have to specify it due to the behaviour of cout.
}
int main(){
    cout<<"Enter the radious of the Circle : ";
    double r;
    cin>>r;
    Area(r);
    return 0;
}