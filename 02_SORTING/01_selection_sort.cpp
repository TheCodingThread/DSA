#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-2; i++){
        int mini = i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    //The basic idea is about selecting the minimum element and then swaping it with the first element of the unsorted array part
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    selection_sort(arr, n);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    //for all cases, the time complexity of selection sort is O(n^2) and space complexity is O(1)

    return 0;
}