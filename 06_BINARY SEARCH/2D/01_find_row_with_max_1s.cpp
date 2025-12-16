#include<bits/stdc++.h>
using namespace std;

int max1s(int arr[][100], int n, int m){
    int maxi = 0;
    int index = -1;
    for(int i=0; i<n; i++){
        int c = m - (lower_bound(arr[i], arr[i]+m, 1) - arr[i]);
        if(c > maxi){
            maxi = c;
            index = i;
        }
    }
    return index;
}
//time complexity: O(nlogm)

int main(){
    int n;
    cout << "Enter rows: ";
    cin >> n;
    int m;
    cout << "Enter columns: ";
    cin >> m;
    int arr[n][100];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int result = max1s(arr, n, m);
    cout << "Row index with max ones: " << result << endl;

    return 0;
}