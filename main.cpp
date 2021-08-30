#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    int n;
    
    cout << "Enter a number: \n";
    cin>>n;
    cout << "The factorial of " << n << " is: " << factorial(n) << "\n";

    int x= 56, y = 98;
    cout << "GCD of " << x << ", " << y << " is: " << gcd(x, y) << "\n";

    return 0;
}
