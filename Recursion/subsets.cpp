/**
 * Recursive code to find the subset that results a specific sum
 **/
#include <iostream>
using namespace std;

bool subsets(int arr[], int n, int idx, int k, int sum) {
    if(idx==n) {
        return (sum==k);
    }
    return (subsets(arr,n,idx+1, k, sum+arr[idx]) | subsets(arr,n,idx+1, k, sum));
}

int main() {
    int arr[] = {2, 3, 10, 12, 8};
    int sum = 0;
    cout << subsets(arr, 5, 0, 4, sum);
}