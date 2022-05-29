#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    if(num>0) {
        return (num%10)+sumOfDigits(num/10);
    }
    else return num;
}
int main()
{
    cout << sumOfDigits(23);
}