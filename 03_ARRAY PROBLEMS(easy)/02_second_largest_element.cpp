#include<bits/stdc++.h>
using namespace std;

int secLar(int arr[], int n) {
    int largest = arr[0], secLargest = INT_MIN;
    for(int i = 1; i<n; i++){
        if(arr[i] > largest) {
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secLargest && arr[i] != largest) {
            secLargest = arr[i];
        }
    }
    return secLargest;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int num = secLar(arr, n);

    cout << "The second largest element in the array is: " << num;
    return 0;
}