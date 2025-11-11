#include<bits/stdc++.h>
using namespace std;

int fNl(int arr[], int n){
    int target;
    cout << "Enter the element: ";
    cin >> target;
    int low = 0, high = n-1;
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            cout << "First occurence: " << mid << endl;
            while(arr[mid+1] == arr[mid]) mid++;
            cout << "Second occurence: "; 
            return mid;
        }
        else if(target > arr[mid]) low = mid+1;
        else high = mid-1;
    }
    cout << "First occurence: " << -1 << endl;
    cout << "Last occurence: ";
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

    int result = fNl(arr, n);
    cout << result;

    return 0;
}