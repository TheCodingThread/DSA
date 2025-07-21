#include <bits/stdc++.h>
using namespace std;

//brute force
// void moveZeroes(int arr[], int n){
//     vector<int> temp;
//     for(int i = 0; i<n; i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }
//     for(int i=0; i<temp.size(); i++){
//         arr[i] = temp[i];
//     }
//     for(int i=temp.size(); i<n; i++){
//         arr[i] = 0;
//     }
// }
//time complexity: O(2n)
//space complexity: O(x) where x is the number of non-zero elements in the array

//optimal
void moveZeroes(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            for(int j=i+1; j<n; j++){
                if(arr[j] != 0){
                    swap(arr[i], arr[j]);
                    break; // break after the first non-zero swap
                }
            }
        }
    }
}
//time complexity O(N)
//space complexity O(1)

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    moveZeroes(arr, n);

    cout << "Array after moving zeroes to the end: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}