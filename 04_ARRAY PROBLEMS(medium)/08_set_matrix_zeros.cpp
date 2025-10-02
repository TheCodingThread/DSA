#include<bits/stdc++.h>
using namespace std;

//Matrix is consisting of 0s and 1s, if any element is 0 then convert the whole row and column to 0

//brute force - traversing through the matrix and converting the row and column associated with the zero to -1 and then again traversing to convert -1 to 0
// void row(int arr[][100], int i, int j, int n){
//     for(int i=0; i<n; i++){
//         if(arr[i][j] != 0) arr[i][j] = -1; 
//     }
// }

// void column(int arr[][100], int i, int j, int m){
//     for(int j=0; j<m; j++){
//         if(arr[i][j] != 0) arr[i][j] = -1; 
//     }
// }

// void zeroConvert(int arr[][100], int n, int m){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j] == 0){
//                 row(arr, i, j, n);
//                 column(arr, i, j, m);
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j] == -1) arr[i][j] = 0;
//         }
//     }
// }
//time complexity: O((n*m(n+m))+(n*m)) somewhere to the O(n^2)

//better - maintain a row and column array(initialised to 0) and if anyone encounters 0 while traversing then convert that particular element of row and column array to 1 and then traverse again to convert the whole row/column to 0
// void zeroConvert(int arr[][100], int n, int m){
//     int row[n] = {0}, col[m] = {0};
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j] == 0){
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(row[i] == 1 || col[j] == 1) arr[i][j] = 0;
//         }
//     }
// }
//time complexity: O(2*n*m); space complexity: O(n)+O(m)

//optimal - optimize the space; instead of taking row and column array we perform this step within the matrix itself
void zeroConvert(int arr[][100], int n, int m){
    int col0 = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                if(j != 0) arr[0][j] = 0;
                else col0 = 0;
            }
        }
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(arr[i][j] != 0){
                if(arr[0][j] == 0 || arr[i][0] == 0) arr[i][j] = 0;
            }
        }
    }
    if(arr[0][0] == 0){
        for(int j=0; j<m; j++) arr[0][j] = 0;
    }
    if(col0 == 0){
        for(int i=0; i<n; i++) arr[i][0] = 0;
    }
}
//time complexity: O(2*n*m); space complexity: O(1)

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int m;
    cout << "Enter the number of columns: ";
    cin >> m;
    int arr[n][100];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    zeroConvert(arr, n, m);

    cout << "The converted matrix is:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}