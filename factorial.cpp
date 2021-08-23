#include "functions.h"
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n<0)
    {   
        cout << "re-enter a positive number: \n";
        cin>>n;
        return factorial(n);
    }
    if(n==1) return 1;

	return(n * factorial(n-1));
    
}
