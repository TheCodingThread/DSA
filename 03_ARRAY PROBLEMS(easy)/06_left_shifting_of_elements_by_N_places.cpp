#include<bits/stdc++.h>
using namespace std;

void lNShift(int *arr1, int *arr2, int n, int d){
    int temp = n;
    for(int i=0; i<n; i++){
        if(i>=d){
            arr2[i-d] = arr1[i]; // Shift elements to the left by d places
        }
        else{
            arr2[temp-d] = arr1[i]; // Wrap around the first d elements to the end
            temp++;
        }
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr1[n];
    int arr2[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of places to shift: ";
    int d;
    cin >> d;

    lNShift(arr1, arr2, n, d);

    cout << "Array after left shifting by " << d << " places: ";
    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}