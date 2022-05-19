#include <iostream>
#include <cmath>
using namespace std;
int raise2power(int r, int n) {
    if(n>1) {
        return (int) pow(r,n-1);
    }
    return 1;
}
int getNthTerm(int a, int r, int n) {
    return a*raise2power(r,n);
}
int main()
{
    cout << getNthTerm(3,2,5);
}