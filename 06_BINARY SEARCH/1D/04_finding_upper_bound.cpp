#include<bits/stdc++.h>
using namespace std;

// int upperBound(int arr[], int n){
//     int target; 
//     cout << "Enter the target element: ";
//     cin >> target;
//     int low = 0, high = n-1;
//     int ans  = INT_MAX;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid] == target){
//             while (arr[mid+1] == arr[mid])
//             {
//                 mid++;
//             }
//             return mid+1;
//         }
//         else if(target < arr[mid]){
//             high = mid-1;
//             ans = min(ans, mid);
//         }
//         else low = mid+1;
//     }
//     if(ans == INT_MAX) return n;
//     return ans;
// }

//in-built function for upper bound
int upperBound(int arr[], int n){
    int target; 
    cout << "Enter the target element: ";
    cin >> target;
    int ub = upper_bound(arr, arr+n, target) - arr;
    return ub;
}

//time complexity: O(log2(n))

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

    int result = upperBound(arr, n);
    cout << "The upper bound of the target element is situated at: " << result;

    return 0;
}