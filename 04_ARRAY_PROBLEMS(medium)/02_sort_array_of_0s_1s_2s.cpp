#include<bits/stdc++.h>
using namespace std;

//brute force - merge sort.
//time complexity: O(nlogn); space complexity: O(n)

//better - count occurrences of 0s, 1s and 2s and then fill the array accordingly
// void sortArray(int arr[], int n){
//     int cnt0 = 0, cnt1 = 0, cnt2 = 0;
//     for(int i = 0; i<n ; i++){
//         if(arr[i] == 0) cnt0++;
//         else if(arr[i] == 1) cnt1++;
//         else cnt2++;
//     }
//     for(int i=0; i<cnt0; i++){
//         arr[i] = 0;
//     }
//     for(int i=cnt0; i<cnt0+cnt1; i++){
//         arr[i] = 1;
//     }
//     for(int i=cnt0+cnt1; i<n; i++){
//         arr[i] = 2;
//     }
// }
//time complexity: O(2n); space complexity: O(1)

//optimal - Dutch National Flag Algorithm
void sortArray(int arr[], int n){
    int low = 0, mid = 0, high = n-1;
    while(mid<=high){
        for(int i=0; i<n; i++){
            if(arr[mid] == 0){
                swap(arr[mid], arr[low]);
                mid++, low++;
            }
            else if(arr[mid] == 1) mid++;
            else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
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

    sortArray(arr, n);
    
    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}