#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i++) {
        int x = n-1;
        int temp = i;
        for(int j=1;j<=i;j++) {
            cout << temp;
            temp+=x;
            x--;
        }
        cout << endl;
    }
    
}