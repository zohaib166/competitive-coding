/**
 * @file Reversort.cpp
 * @author Zohaib Hasan (zohaib.ec@global.org.in)
 * @brief Reversort algorithm reverses a subarray everytime it finds smallest element at last position
 * @version 0.1
 * @date 2023-01-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int c=1;c<=T;c++) {
        int cost = 0;
        int N;
        cin >> N;
        vector <int> arr;
        for(int i=0; i<N; i++) {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }

        for(int i=0; i<arr.size()-1; i++) {

            int min = *min_element(arr.begin()+i, arr.end());

            auto j = find(arr.begin()+i, arr.end(), min);

            reverse(arr.begin(),j);

            cost = cost + distance(arr.begin(), j) - i + 1;
        }

        cout << cost;
    }
    return 0;
}