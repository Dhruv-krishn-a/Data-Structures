#include <iostream>
using namespace std;
 
// Returns true if n is even, else odd
bool isEven(int n)
{
 
    // n^1 is n+1, then even, else odd
    if ((n ^ 1) == (n - 1))
        return false;
    else
        return true;       
}
 
// Driver code
int main()
{
    int n = 1234;
    isEven(n) ? cout << "Even" : cout << "Odd" ;
 
    return 0;
}