#include <bits/stdc++.h>
using namespace std;
 
int gcd(int x, int y)
{
    if (x == 0)
        return y;
    else if (y == 0)
        return x;
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    return x;
}
