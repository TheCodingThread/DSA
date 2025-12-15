#include<bits/stdc++.h>
using namespace std;

int kthNum(int arr[], int n, int k){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int val = arr[mid]-(mid+1);
        if(val == k) return arr[mid]-1;
        else if(val < k) low = mid+1;
        else high = mid-1;
    }
    return arr[high]+(k-(arr[high]-(high+1)));
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

    int k;
    cout << "Enter k: ";
    cin >> k;

    int result = kthNum(arr, n, k);
    cout << k << "th missing number: " << result << endl;

    return 0;
}