#include <iostream>
using namespace std;
void printArray(int arr[], int N) {
    for(int i=0; i<N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void permute(int arr[], int firstidx, int lastidx, int N) {
    if(firstidx==lastidx) {
        printArray(arr, N);
    } else {
        for(int i=firstidx;i<=lastidx;i++) {
            swap(arr[firstidx],arr[i]);

            permute(arr, firstidx+1, lastidx, N);

            swap(arr[firstidx],arr[i]);
        }
    }
}

int [][] 
int main() 
{
    int a[] = {1,2,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    permute(a,0,n-1,n);
    return 0;
}