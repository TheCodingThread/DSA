#include<bits/stdc++.h>
using namespace std;

//better force - finding length of all the subarrays possible in the array with sum 0
// int larSA(int arr[], int n){
//     int count = 0;
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             int lenCount;
//             if(sum == 0) lenCount = j-i+1;
//             count = max(count, lenCount);
//         }
//     }
//     return count;
// }
//time complexity: O(n^2); space complexity: O(1)

//optimal
int larSA(int arr[], int n){
    int i = 0;
    int sum = 0;
    int len = 0;
    for(int j=0; j<n; j++){
        sum += arr[j];
        if(sum == 0){
            len = max(len, j-i+1);
        }
        else if(sum > 0){
            sum -= arr[i];
            i++;
        }
    }
    return len;
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

    int result = larSA(arr, n);;
    cout << "Length of largest subarray with sum 0 is: " << result << endl;

    return 0;
}