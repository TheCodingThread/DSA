#include<bits/stdc++.h>
using namespace std;

void swaparr(int arr[], int l, int r){
    int n = sizeof(arr);
    if(l >= r) return;
    swap(arr[l], arr[r]);
    swaparr(arr, l+1, r-1);
}

int main(){
    int arr[10], n;
    cout << "Enter number of elements of array: ";
    cin >> n;
    for(int i = 0; i<n; i++){
        cout << "Enter element: ";
        cin >> arr[i];
    }
    swaparr(arr, 0, n-1);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}