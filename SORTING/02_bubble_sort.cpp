//Bubble sort pushes the maximum element to the end by doing adjacent swaps

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=n-1; i>=1; i--){
        int swapornot = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapornot = 1;
            }
        }
        if(swapornot == 0){
            break; //if no swap is done, the array is already sorted. This is for improving the time complexity
        }
    }
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    //the best time complexity is O(n) when the array is already sorted, the average and worst case time complexity is O(n^2) and space complexity is O(1)

    //to make the sorted array code the best time complexity you need to add a boolean variable to check if the array is already sorted or not

    return 0;
}