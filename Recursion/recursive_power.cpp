#include <iostream>
using namespace std;

int raise2power(int base, int exponent) {
    if(exponent==1) {
        return base;
    }

    return base * raise2power(base, exponent-1);
}

int main()
{
    cout << raise2power(2,3);
}