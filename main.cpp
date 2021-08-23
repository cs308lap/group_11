#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    int n;
    
    printf("Enter a number: \n");
    cin>>n;
    printf("The factorial of %d is %d", n, factorial(n));
    return 0;
}
