#include<bits/stdc++.h>
using namespace std;

//brute force - traversing and counting the occurrence of element
// int maxElmt(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int count = 0;
//         for(int j=0; j<n; j++){
//             if(arr[i] == arr[j]) count++;
//         }
//         if(count > n/2) return arr[i];
//     }
//     return -1;
// }
//time complexity: O(n^2)

//better - hashing
// int maxElmt(int arr[], int n){
//     map<int, int> mpp;
//     for(int i=0; i<n; i++) mpp[arr[i]]++;
//     for(auto i: mpp){
//         if(i.second > n/2) return i.first;
//     }
//     return -1;
// }
// //time complexity: O(NlogN)+O(N); space complexity: O(N)

//optimal - Moore's Voting ALgorithm
int maxElmt(int arr[], int n){
    for(int i=0; i<n; i++){
        int elmt = arr[i];
        int count = 1, temp;
        for(int j=i+1; j<n; j++){
            if(arr[j] == elmt) count++;
            else count --;
            temp = j;
            if(count == 0) break;
        }
        if(count != 0){
            return arr[i];
            break;
        }
        i = temp-1; 
    }
    return -1;
}

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

    int result = maxElmt(arr, n);
    cout << "The element is: " << result;
    return 0;
}