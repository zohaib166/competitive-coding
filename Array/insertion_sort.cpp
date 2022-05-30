#include <iostream>
using namespace std;
#define N 6

int main() 
{
    int arr[N] = {3,6,4,7,5,8};
    int pos,j;
    for(int i=1;i<N;i++) {
        pos = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>pos) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pos;
    }

    for(int i=0;i<N;i++) {
        cout << arr[i]<<" ";
    }
}