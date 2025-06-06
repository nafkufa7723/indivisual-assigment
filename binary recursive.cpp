#include <iostream>
using namespace std;
int binarySearchRecursive(int arr[], int left, int right, int target) {
    for (; left <= right;) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {11, 38, 25, 3, 9, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    
    int result = binarySearchRecursive(arr, 0, n - 1, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}