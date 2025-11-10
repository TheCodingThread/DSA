#include<bits/stdc++.h>
using namespace std;

//the largest element which is smaller than or equal to the target element
int floor(int arr[], int n){
    int target; 
    cout << "Enter the target element: ";
    cin >> target;
    int lb = lower_bound(arr, arr+n, target) - arr;
    if(arr[lb] == target) return arr[lb];
    else{
        while(arr[lb]>target) lb--;
        return arr[lb];
    }
}

//smallest element which is larger than or equal to the target element
int ceil(int arr[], int n){
    int target; 
    cout << "Enter the target element: ";
    cin >> target;
    int lb = lower_bound(arr, arr+n, target) - arr;
    return arr[lb];
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

    int op;
    cout << "Enter 1 for Floor and 2 for Ceil: ";
    cin >> op; 
    if(op == 1){ 
        int result = floor(arr, n);
        cout << "The floor of the element is: " << result;
    }
    else if(op == 2){
        int result = ceil(arr, n);
        cout << "The ceil of the element is: " << result;
    } 
    else cout << "Invalid option!!";

    return 0;
}