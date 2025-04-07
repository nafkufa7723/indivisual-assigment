#include <iostream>
 using namespace std;
 int findSecondLargest(int arr[], int size) {
     if (size < 2) return -1;
     int first = arr[0], second = -1;
     for (int i = 1; i < size; i++) {
         if (arr[i] > first) {
             second = first;
             first = arr[i];
         } else if (arr[i] > second && arr[i] != first) {
             second = arr[i];
         }
     }
     return second;
 }
 int findThirdLargest(int arr[], int size) {
     if (size < 3) return -1;
     int first = arr[0], second = -1, third = -1;
     for (int i = 1; i < size; i++) {
         if (arr[i] > first) {
             third = second;
             second = first;
             first = arr[i];
         } else if (arr[i] > second && arr[i] != first) {
             third = second;
             second = arr[i];
         } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
             third = arr[i];
         }
     }
     return third;
 }
 int main() {
     int arr[] = {7,21,45,76,99};
     int size = sizeof(arr) / sizeof(arr[0]);
     int secondLargest = findSecondLargest(arr, size);
     int thirdLargest = findThirdLargest(arr, size);
     cout << "The second largest number in the array is: " << secondLargest << endl;
     cout << "The third largest number in the array is: " << thirdLargest << endl;
     return 0;
 }
