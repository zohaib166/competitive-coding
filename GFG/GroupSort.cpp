//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;


// } Driver Code Ends
//User function template for C++

class Solution{
public:

    void reverseArray(vector<long long>& arr, int start, int end) {
        int temp;
        while(start<end) {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++; end--;
        }
    }
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int start = 0, end = start+k-1;
        reverseArray(arr, start, end);
        while(end<n) {            
            start = end+1;
            end = start + k - 1;
            if(end>=n) {
                reverseArray(arr, start, n-1);
                break;
            } else {
                reverseArray(arr, start, end);
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    vector<long long> A = {36, 93, 64, 48, 96, 55, 70, 0, 82, 30, 16, 22, 38, 53, 19, 50, 91, 43, 70, 88, 10, 57, 14, 94, 13, 36, 59, 32, 54, 58, 18, 82, 67};
    for(long long x: A) {
        cout << x << " ";
    }
    cout << endl;
    Solution a;
    
    a.reverseInGroups(A, 33, 13);
    
    for(long long x: A) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}


// } Driver Code Ends