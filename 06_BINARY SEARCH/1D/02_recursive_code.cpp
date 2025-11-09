#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int target, int low, int mid, int high){
    mid = (low+high)/2;
    if(arr[mid] == target) return mid;
    else if(target < arr[mid]){
        high = mid-1;
        binarySearch(arr, target, low, mid, high);
    }
    else{
        low = mid+1;
        binarySearch(arr, target, low, mid, high);
    }
}

int binarySearchResult(int arr[], int n){
    cout << "Enter the number: ";
    int target;
    cin >> target;
    int low = 0, high = n-1;
    int mid = (low+high)/2;
    int ans = binarySearch(arr, target, low, mid, high);
    return ans;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = binarySearchResult(arr, n);
    cout << result;

    return 0;
}