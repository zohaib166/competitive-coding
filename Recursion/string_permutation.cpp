#include <iostream>
using namespace std;

void permute(string str, int firstidx, int lastidx) {
    if(firstidx==lastidx) {
        cout << str << endl;
    } else {
        for(int i=firstidx;i<=lastidx;i++) {
            swap(str[firstidx],str[i]);

            permute(str, firstidx+1, lastidx);

            swap(str[firstidx],str[i]);
        }
    }
}
int main() 
{
    string a = "ABC";
    int n = a.size();
    permute(a,0,n-1);
    return 0;
}