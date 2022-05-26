#include <iostream>
using namespace std;

int raise2power(int base, int exponent) {
    if(exponent==0) return 1;
    if(exponent%2==1) 
        return raise2power(base, exponent/2)*raise2power(base, exponent/2)*base;
      
    return raise2power(base, exponent/2)*raise2power(base, exponent/2);
}   

int main()
{
    cout << raise2power(5,3);
}