#include <iostream>
using namespace std;
int factorial(int num) {
    if(num==0 || num ==1) {
        return 1;
    } else {
        return num * factorial(num-1);
    }
}

int main() {
    cout << factorial(5);
}

