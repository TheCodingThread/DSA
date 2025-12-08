#include<bits/stdc++.h>
using namespace std;

int srchInArr(int arr[], int n){
    int target; 
    cout << "Enter the target element: ";
    cin >> target;

    int low = 0, high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == target) return mid;

        if(arr[low] == arr[mid] && arr[mid] == arr[high]) low++, high--;
        else if(arr[low] <= arr[mid]){
            if(arr[low] <= target && target <= arr[mid]) high = mid-1;
            else low = mid+1;
        }
        else{
            if(arr[mid] <= target && target <= arr[high]) low = mid+1;
            else high = mid-1;
        }
    }
    
    return -1;
}
//time complexity: O(log(2)n) - average case; O(n/2) - worst case

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

    int result = srchInArr(arr, n);
    cout << result << endl;

    return 0;
}