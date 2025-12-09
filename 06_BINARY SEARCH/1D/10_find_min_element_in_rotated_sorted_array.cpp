#include<bits/stdc++.h>
using namespace std;

//find the sorted half, find the minimum element in that half and then eliminate that half
int findMin(int arr[], int n){
    int ans = INT_MAX;
    int low = 0, high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low] <= arr[mid]){
            ans = min(ans, arr[low]);
            low = mid+1;
        }
        else{
            ans = min(ans, arr[mid]);
            high = mid-1;
        }
    }

    return ans;
}
//time complexity: O(log(2)n)

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

    int result = findMin(arr, n);
    cout << "Minimum element: " << result << endl;

    return 0;
}