#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ft = 0, st = 1;
    int nt = ft;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout << nt;
            nt = ft+st;
            ft = st;
        }
        cout << endl;
    }
    
}