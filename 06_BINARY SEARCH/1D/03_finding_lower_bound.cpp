#include<bits/stdc++.h>
using namespace std;

// int lowerBound(int arr[], int n){
//     int target; 
//     cout << "Enter the target element: ";
//     cin >> target;
//     int low = 0, high = n-1;
//     int ans  = INT_MAX;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid] == target) return mid;
//         else if(target < arr[mid]){
//             high = mid-1;
//             ans = min(ans, mid);
//         }
//         else low = mid+1;
//     }
//     if(ans == INT_MAX) return n;
//     return ans;
// }

//in-built function to find the lower bound
int lowerBound(int arr[], int n){
    int target; 
    cout << "Enter the target element: ";
    cin >> target;
    int lb = lower_bound(arr, arr+n, target) - arr; //we subtracted to get the index
    return lb;
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

    int result = lowerBound(arr, n);
    cout << "The lower bound of the target element is situated at: " << result << endl;

    return 0;
}