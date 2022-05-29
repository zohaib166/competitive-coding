#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char str[], int s, int e) {
    if(s==e) {
        return true;
    }

    if(str[s]!=str[e]) {
        return false;
    }
    if(s<e+1)
        return isPalindrome(str, s+1, e-1);

    return true;
}

int main()
{
    char str[] = "axxa";

    //char [] chstr = 
    int len = strlen(str);

    cout << isPalindrome(str, 0, len-1);
}