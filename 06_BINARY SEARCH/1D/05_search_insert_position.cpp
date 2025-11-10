#include<bits/stdc++.h>
using namespace std;

int insertPos(int arr[], int n){
    int target; 
    cout << "Enter the target element: ";
    cin >> target;
    int lb = lower_bound(arr, arr+n, target) - arr;
    return lb;
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

    int result = insertPos(arr, n);
    cout << "The target element is placed or would be inserted at index: " << result << endl;

    return 0;
}