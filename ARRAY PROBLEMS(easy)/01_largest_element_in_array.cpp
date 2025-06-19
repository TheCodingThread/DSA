#include<bits/stdc++.h>
using namespace std;

int lar_elmt(int arr[], int n){
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest) largest = arr[i];
    }
    return largest;
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int num = lar_elmt(arr, n);

    cout << "The largest element in the array is: " << num;

    return 0;
}