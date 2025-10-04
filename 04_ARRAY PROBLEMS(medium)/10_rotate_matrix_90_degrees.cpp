#include<bits/stdc++.h>
using namespace std;

//brute force - placing the elements of the array into a new one at their rotated positions
// void rotateArr(int arr[][100], int n){
//     int newArr[n][100];
//     int temp = n-1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             newArr[j][temp] = arr[i][j];
//         }
//         temp--;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << newArr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//time complexity: O(n^2); space complexity: O(n^2)

//optimal - transposing and reversing of matrix
void rotateArr(int arr[][100], int n){
    //transposing matrix
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            if(i != j && i<j){
                swap(arr[i][j], arr[j][i]);
            }
        }
    }
    
    //reversing
    for(int i=0; i<n; i++){
        reverse(arr[i], arr[i]+n);
    }
}
//time complexity: O(n/2 * n/2 + n*n/2); space complexity: O(1)

int main(){
    int n;
    cout << "Enter the order of matrix: ";
    cin >> n;
    int arr[n][100];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    rotateArr(arr, n);

    cout << "Reversed matrix: "<< endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}