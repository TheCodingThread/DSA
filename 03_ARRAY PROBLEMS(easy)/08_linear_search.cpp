#include<bits/stdc++.h>
using namespace std;

int lSearch(int arr[], int n){
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int pos = lSearch(arr, n);
    
    if(pos == -1)
        cout << "Element not found in the array." << endl;
    else

    cout << "Element found at index: " << pos << endl;
    return 0;
}