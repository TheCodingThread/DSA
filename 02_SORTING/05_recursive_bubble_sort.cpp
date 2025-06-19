#include<bits/stdc++.h>
using namespace std;

void recBubble(int arr[], int n){
    if(n==1) return;
    int swapornot = 0; //to improve time complexity
    for(int i=0; i<=n-2; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
        swapornot = 1;
    }

    if(swapornot == 0) return; // If no swaps were made, the array is sorted
    recBubble(arr, n-1);
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    recBubble(arr, n);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}