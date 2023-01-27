#include <iostream>
#include <vector>

using namespace std;

int *twoSum(vector<int> &num, int target) {
    int *arr = (int*) malloc(sizeof(int)*2);
    for(int i=0; i<num.size(); i++) {
        for(int j=i+1; j<num.size(); j++) {
            if(num[i]+num[j] == target) {
                arr[0] = i; arr[1] = j;
                break;
            }
        }
    }
    return arr;
}

int main() {
    vector<int> num = {2,7,11,15};
    int target = 26;
    int *result;
    result = twoSum(num, target);
    
    cout << result[0] << "," << result[1] << endl;
    
}