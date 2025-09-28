#include<bits/stdc++.h>
using namespace std;

//finding the existence of the consecutive sequences in the array and returning the longest length amongest them

//brute force - traversing through array and finding each element of the sequence
// int seqLen(int arr[], int n){
//     int len = 1;
//     for(int i=0; i<n; i++){
//         int count = 1;    
//         int j = 0;
//         while(j<n){
//             if(arr[j] == arr[i]+count) {
//                 count++;
//                 j=0;
//             }
//             else j++;
//         }
//         len = max(len, count);
//     }
//     return len;
// }
//time complexity: O(N^2); space complexity: O(1)

//better - sorting the array and then keeping the count of the sequence
// int seqLen(int arr[], int n){
//     int longest = 1;
//     int lastSmaller = INT_MIN;
//     sort(arr, arr + n);
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]-1 == lastSmaller){
//             count++, lastSmaller = arr[i];
//         }
//         else if(arr[i] != lastSmaller) count=1, lastSmaller = arr[i];
//         longest = max(longest, count);
//     }
//     return longest;
// }

//optimal - placing the elements in an unordered set and then proceeding the process
int seqLen(int arr[], int n){
    unordered_set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    int longest = 1;
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int count = 1; 
            int x = it;
            while(st.find(x+1) != st.end()){
                x++, count++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}
//time complexity: O(3N); space complexity: O(N)

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

    int result = seqLen(arr, n);
    cout << "Length of the longest consecutive sequence in the array is: " << result;
    return 0;
}