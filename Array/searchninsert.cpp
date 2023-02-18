#include <cstdio>
#include <iostream>
#define ONLINE_JUDGE
using namespace std;

int searchNinsert(int arr[], const int size, int key) {
    int m, l=0, h=size-1;
    m = (h+l)/2;
    while(l<=h) {
        m = (h+l)/2;
        if(arr[m]==key) {
            return m;
        } else if(arr[m]<key) {
            l = m+1;
        } else {
            h = m-1;
        }
    }
    return l;
}

int main() {
    #ifdef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int arr[10], key;
    for(int i=0;i<5;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    printf("%d\n",searchNinsert(arr, 5, key));
}

