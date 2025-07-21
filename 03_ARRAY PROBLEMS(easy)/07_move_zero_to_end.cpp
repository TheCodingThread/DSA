//brute force

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n){
    vector<int> temp;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0; i<temp.size(); i++){
        arr[i] = temp[i];
    }
    for(int i=temp.size(); i<n; i++){
        arr[i] = 0;
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    moveZeroes(arr, n);

    cout << "Array after moving zeroes to the end: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}