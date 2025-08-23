#include<bits/stdc++.h>
using namespace std;

//brute force(generating all subarrays)
// int lenSubArray(int arr[], int n, int s){
//     int len = 0;
//     for(int i=0; i<n; i++){
//         int sum=0;
//         for(int j=i; j<n; j++){
//             sum+=arr[j];
//             if(sum == s){
//                 len = max(len, j-i+1);
//             }
//         }
//     }
//     return len;
// }
//time complexity: O(n^2); space complexity: O(1)

//better
//in this we use hashing. If the array is also containing negative numbers then this will become the optimal solution. 
//time complexity: O(n^2); space complexity: O(n)

//optimal
int lenSubArray(int arr[], int n, int s){
    int i = 0;
    int sum = 0;
    int len = 0;
    for(int j=0; j<n; j++){
        sum += arr[j];
        if(sum == s){
            len = max(len, j-i+1);
        }
        else if(sum > s){
            sum -= arr[i];
            i++;
        }
    }
    return len;
}
//time complexity: O(n); space complexity: O(1)

int main(){
    int n, s;
    cout << "Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Enter the sum of the elements of the subarray: ";
    cin>>s;

    int result = lenSubArray(arr, n, s);
    cout << "The length of the longest subarray with sum " << s << " is: " << result << endl;
    return 0;
}