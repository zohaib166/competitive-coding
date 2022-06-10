/**
 * Recursive code to find the subset that results a specific sum
 **/
#include <iostream>
using namespace std;
//method 1
bool str_concat(string arr[], int n, int idx, string k, string sum) {
    if(idx==n) {
        return (sum==k);
    }
    return (str_concat(arr,n,idx+1, k, sum+arr[idx]) | str_concat(arr,n,idx+1, k, sum));
}
//method 2
bool isSubString(string str, string substr) {
    if(str.find(substr) != string::npos) {
        return false;
    }
    return true;
}

bool solve(string list[], string s, int n, int idx) {
    if(idx == n) {
        return true;
    }
    for(int i=idx; i<n; i++) {
        if(isSubString(s, list[i])==true) {
            if(solve(list, s, n, i+1))
                return true;
        }
    }
    return false;
}
/*int count = 0;
int solve(string list[], string s, int n, int idx) {
    if(idx == n) {
        return 1;
    }
    for(int i=idx; i<n; i++) {
        if(isSubString(s, list[i])==true) {
            count += solve(list, s, n, i+1);
        }
    }
    return count;
}*/

int main() {
    string list[] = {"Hello", "He", "llo", " Wo", "rld"," World"};
    //string list[] = { "llo", " Wo","rld"," World"};
    string target = "Hello World";
    int size = 6;
    string result = "";
    //cout << str_concat(list, size, 0, target, result);
    cout << solve(list, target, size, 0) << endl;
}