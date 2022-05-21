#include <iostream>
using namespace std;

int apseries(int a, int d, int n) {
    if(n==1) {
        return a;
    }

    return a+(n-1)*d + apseries(a,d,n-1);
}

int main() {
    cout << apseries(2, 3, 10);
}