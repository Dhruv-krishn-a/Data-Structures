#include <iostream>
using namespace std;

// Function which calculates the set bits.
int count_bits(int n){
    
    // Initialising a variable to count the total.
    int total = 0;
    
    while (n){
        
            // If the last bit is 1, increment the total
        if((n&1)>0){
            ++total;
        }

        // Right shift the value of n
        n >>= 1;
    }
    return total;
}
int main(){
    int N;
    cout<<"Enter an Intiger value :"<<endl;
    cin>>N;
    cout << "Count of set bits in " << N<<" = "<<count_bits(N);
    return 0;
}               
