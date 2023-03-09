#include <bits/stdc++.h>
using namespace std;
int n;

int binarySearch(int *a, int left, int right, int key) {
    int l = left, r = right;
    while(l <= r) {
        int mid = l + (r-l)/2;
        if(a[mid] == key)   return mid;
        else if(a[mid] < key) l = mid+1;
        else r = mid;
    }
    return -1;
}

int main() {
    cin >> n;
    int *a = new int[n];

    for(int i=0; i < n; i++) cin >> a[i];

    sort(a,a+n);

    int key; cin >> key;

    cout << binarySearch(a,0,n-1,key);
    return 0;
}