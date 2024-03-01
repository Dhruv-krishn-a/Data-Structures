#include<iostream>
using namespace std;
void Find_max(int num1,int num2,int num3){
    if(num1>=num2 && num1>=num3){
        cout<<"num1 is Greatest :"<<num1<<endl;
    }
    else if(num2>=num3){
        cout<<"num2 is Greatest :"<<num2<<endl;
    }
    else 
    cout<<"num3 is Greatest :"<<num3;
}
int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    Find_max(num1,num2,num3);
    return 0;
}
//A Better Aproach
/* 
#include <iostream>
using namespace std;

// Function to find the maximum among three numbers
int Find_max(int num1, int num2, int num3) {
    return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
}

int main() {
    int num1, num2, num3;

    // Input three integers
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // Call the function to find the maximum
    int max_num = Find_max(num1, num2, num3);

    cout << "The greatest number is: " << max_num << endl;

    return 0;
}
*/