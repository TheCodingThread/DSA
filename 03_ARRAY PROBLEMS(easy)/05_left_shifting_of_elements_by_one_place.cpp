#include<bits/stdc++.h>
using namespace std;

void lShift(int *arr, int n){
    int num = arr[0]; // Store the first element
    for(int i=0; i<n; i++){
        if(i==n-1){
            arr[i] = num; // Last element becomes the first element
        }
        else{
            arr[i] = arr[i+1]; // Shift each element to the left
        }
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    lShift(arr, n);

    cout << "Array after left shifting: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}