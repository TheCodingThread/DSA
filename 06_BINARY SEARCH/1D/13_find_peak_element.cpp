#include<bits/stdc++.h>
using namespace std;

// Peak element is the element which is greater than its neighbors.

//brute force - linear search
// int peakEle(int arr[], int n){
//     for(int i=0; i<n; i++){
//         if(i == 0 && arr[i]>arr[i+1]) return arr[i];
//         else if(i == n-1 && arr[i]>arr[i-1]) return arr[i];

//         if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) return arr[i];
//     }
// }

//optimal - binary search
int peakEle(int arr[], int n){
    if(n == 1) return arr[0];

    if(arr[0]>arr[1]) return arr[0];
    else if(arr[n-1]>arr[n-2]) return arr[n-1];

    int l = 1, h = n-2;

    while(l<=h){
        int m = l + (h-l)/2;
        if(arr[m]>arr[m-1] && arr[m]>arr[m+1]) return arr[m];
        else if(arr[m-1]>arr[m]) h = m-1;
        else l = m+1;
    }

    return 0;
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

    int r = peakEle(arr, n);
    cout << "The peak element is: " << r << endl;

    return 0;
}