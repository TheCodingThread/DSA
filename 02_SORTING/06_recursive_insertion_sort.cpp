#include<bits/stdc++.h>
using namespace std;

void recInsert(int arr[], int i, int n){
    if(i == n) return;

    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j], arr[j-1]);
        j--;
    }

    recInsert(arr, i+1, n);
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    recInsert(arr, 0, n);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}