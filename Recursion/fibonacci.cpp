#include <iostream>
using namespace std;

int NthFibo(int n) {
    if(n==1) {
        return 0;
    } else if(n==2) {
        return 1;
    } else {
        return NthFibo(n-1) + NthFibo(n-2);
    }
}

int main()
{
    cout << NthFibo(10);
}