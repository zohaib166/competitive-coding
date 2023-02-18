#include<bits/stdc++.h>
#define CP
using namespace std;

int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
string roman[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

string intToRoman(int x) {
    string r = "";
    int i = 12;
    while(x>0) {
        int quo = x/num[i];
        x %= num[i];
        while(quo!=0) {
            r.append(roman[i]);
            quo--;
        }
        i--;
    }  
    return r;      
}

int main()
{
    #ifdef CP
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
    int input;
    cin >> input;
    cout << intToRoman(input) << endl;
}