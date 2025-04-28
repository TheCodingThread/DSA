#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){ //the element is compared with previous elements that's why j>0
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main(){
    //In insertion sort, we take one element and insert it in the correct position
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    //the best time complexity is O(n) when the array is already sorted(while loop doesn't run), the average and worst case time complexity is O(n^2) and space complexity is O(1)
    return 0;
}