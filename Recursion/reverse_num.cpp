#include <iostream>
using namespace std;

int reverse_num(int num) {
    static int rev=0;
    if(num>0) {
        rev = rev * 10 + num%10;
        reverse_num(num/10);
    }
    return rev;
}
int main()
{
    cout << reverse_num(234);
}