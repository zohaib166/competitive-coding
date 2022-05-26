#include <iostream>
#define N 6
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[N] = {3,6,4,7,5,8};
    cout << "Unsorted array" << endl;
    printArray(arr,N);
    int min;
    int temp;
    for(int i=0; i<N; i++) {
        min = i;
        for(int j=i+1; j<N; j++) {
            if(arr[j]<arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout << "Sorted array" << endl;
    printArray(arr,N);
}