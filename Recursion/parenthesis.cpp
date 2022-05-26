#include <iostream>
using namespace std;

void print(int N, char ch[], int idx, int open, int close) {
    if(idx == N) {
        for(int i=0; i < N ;i++) {
            cout << ch[i] << " ";
        }
        cout << endl;
    }
    if(open < N/2) {
        ch[idx] = '(';
        print(N, ch, idx+1, open+1, close);
    }
    if(close < open) {
        ch[idx] = ')';
        print(N, ch, idx+1, open, close+1); 
    }
}

int main()
{
    const int N = 6;
    char ch[N];
    int open=0, close=0;
    print(N, ch, 0, open, close);
}