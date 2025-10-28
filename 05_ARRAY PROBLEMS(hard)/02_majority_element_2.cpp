#include<bits/stdc++.h>
using namespace std;

//provide array of elements that appears more than n/3 times in the given array

//brute force
// unordered_set<int> majorEle(int arr[], int n){
//     unordered_set<int> ans;
//     for(int i=0; i<n; i++){
//         int count = 1;
//         for(int j=i+1; j<n; j++){
//             if(arr[i] == arr[j]) count++;
//             if(count > floor(n/3)) ans.insert(arr[i]);
//         }
//     }
//     return ans;
// }
//time complexity: O(n^2); space complexity: O(1)

//better - hashing
unordered_set<int> majorEle(int arr[], int n){
    unordered_set<int> ans;
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]] == floor(n/3)+1) ans.insert(arr[i]);
    }
    return ans;
}
//time complexity: O(n); space complexity: O(n)

//optimal - From the previous majority element(n/2)

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

    unordered_set<int> result = majorEle(arr, n);
    cout << "Elements that appear more than n/3 times are: ";
    for (int ele : result) {
        cout << ele << " ";
    }

    return 0;
}