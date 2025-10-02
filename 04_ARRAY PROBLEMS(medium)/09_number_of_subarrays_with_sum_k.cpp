#include<bits/stdc++.h>
using namespace std;

//better
int subarrayCount(int arr[], int n){
    int count = 0;
    int k;
    cout << "Enter the sum of the subarrays: ";
    cin >> k;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            if(sum == k) count++;
        }
    }
    return count;
}
// time complexity: O(N^2)

//optimal - use prefix sum

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

    int result = subarrayCount(arr, n);
    cout << "The number of subarrays are: " << result;

    return 0;
}