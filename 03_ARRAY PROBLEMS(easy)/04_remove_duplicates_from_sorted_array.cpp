#include<bits/stdc++.h>
using namespace std;

void rem_dups(int *arr, int n) {
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1]){
            // If current element is same as previous, shift elements to the left
            for(int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // Reduce size of array
            i--; // Stay at the same index to check the new element at this position
        }
    }
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
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