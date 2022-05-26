#include <iostream>
#define N 6
using namespace std;

int main()
{
    int arr[N] = {3,6,4,7,5,8};
    int temp;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] =  arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<N; i++) {
        cout << arr[i] << " ";
    }
}