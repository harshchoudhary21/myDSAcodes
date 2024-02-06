#include <bits/stdc++.h>
using namespace std;

int binary_SearchRecursive(vector<int>& arr, int target, int low, int high) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            return binary_SearchRecursive(arr, target, mid + 1, high);
        }
        return binary_SearchRecursive(arr, target, low, mid - 1);
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 2;
    int index = binary_SearchRecursive(arr, target, 0, arr.size() - 1);
    cout << index;

    return 0;
}