#include<bits/stdc++.h>
using namespace std;

//better 
// int maxSum(int arr[], int n){
//     int maxi = INT_MIN;
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             maxi = max(sum, maxi);
//         }
//     }
//     return maxi;
// }
//time complexity: O(N^2); space complexity: O(1)

//optimal - Kadane's Algo: Traversing and adding up the sum until it becomes negative where the sum starts again from 0
int maxSum(int arr[], int n){
    int maxi = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}
//time complexity: O(N); space complexity: O(1)

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

    int result = maxSum(arr, n);
    cout << "Maximum subarray sum is: " << result << endl;
    return 0;
}