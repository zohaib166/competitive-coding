#include <iostream>
#include <algorithm>

#define N 6

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if(r>=l) {
        int mid = (l+r-1)/2;
        if(arr[mid]==x) {
            return mid;
        }

        //find in left subarray
        if(arr[mid] > x) {
            return binarySearch(arr, l, mid-1, x);
        }
        //else find in right subarray
        return binarySearch(arr, mid+1, r, x);
    }
    return -1;
}
void printArray(int arr[]) {
    for(int i=0;i<N;i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}
int main()
{
    int arr[N] = {3,6,4,7,5,8};
    printArray(arr);
    
    sort(arr, arr+N);
    printArray(arr);
    cout << binarySearch(arr,0,N-1,7);

}

