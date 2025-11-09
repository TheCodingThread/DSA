#include<bits/stdc++.h>
using namespace std;

//better - generate all the subarrays and then deduce the maximum product among them
// int mpSA(int  INT_MIN;
//     for(int i=0; i<n; i++){
//         int mul = 1;
//         for(int j=i; j<n; j++){
//             mul *= arr[j];
//             ans = max(ans, mul);
//         }
//     }
//     return ans;
// }arr[], int n){
//time complexity: O(n^2); space complexity: O(1)

//optimal - observational approach
int mpSA(int arr[], int n){
    int pre = 1, suf = 1;
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        if(pre == 0) pre = 1;
        if(suf == 0) suf = 1;
        pre *= arr[i];
        suf *= arr[n-i-1];
        ans = max(ans, max(pre, suf));
    }
    return ans;
}
//time complexity: O(n); space complexity: O(1)

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

    int result = mpSA(arr, n);

    cout << "The maximum product of the subarrays possible is: " << result << endl;
    return 0;
}