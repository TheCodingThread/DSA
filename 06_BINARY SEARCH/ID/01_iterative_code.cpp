#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n){
    cout << "Enter the number you need to find: ";
    int target;
    cin >> target;
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target) return mid;
        else if(target < arr[mid]) high = mid-1;
        else low = mid+1;
    }
    return -1;
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

    int result = binarySearch(arr, n);
    cout << result;

    return 0;
}