//Problem: Remove Duplicates from Sorted Array
//Solution: We can use the two-pointer technique to remove duplicates in-place. We maintain a pointer for the position of unique elements and iterate through the array, comparing each element with the last unique element. If we find a new unique element, we move it to the next position of unique elements.

#include<bits/stdc++.h>
using namespace std;

//brute-force solution
// void rem_dups(int *arr, int n) {
//     for(int i=1; i<n; i++){
//         if(arr[i] == arr[i-1]){
//             // If current element is same as previous, shift elements to the left
//             for(int j = i; j < n - 1; j++) {
//                 arr[j] = arr[j + 1];
//             }
//             n--; // Reduce size of array
//             i--; // Stay at the same index to check the new element at this position
//         }
//     }
//     cout << "Array after removing duplicates: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
// }
//time complexity: O(n^2)

//optimal solution: 2-pointer approach
void rem_dups(int *arr, int n) {
    if (n == 0) return;

    int uniqueIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the sorted array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rem_dups(arr, n);
    return 0;
}