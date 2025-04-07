#include <iostream> 
 using namespace std; 
  
 int findsmallestNumber(int arr[], int size) { 
     int smallest = arr[0]; 
     for (int i = 1; i < size; i++) { 
         if (arr[i] < smallest) { 
             smallest = arr[i]; 
         } 
     } 
     return smallest; 
 } 
  
 int main() { 
     int arr[] = {15, 40, 30, 29, 70}; 
     int size = sizeof(arr) / sizeof(arr[0]); 
     int smallest = findsmallestNumber(arr, size); 
     cout << "The smallest number in the array is: " << smallest << 
 endl; 
     return 0; 
 } 
  