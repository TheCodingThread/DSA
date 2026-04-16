#include<bits/stdc++.h>
using namespace std;

bool isArrMinHeap(vector<int>& arr, int n){
    for(int i=0; i<=(n-2)/2; i++){ //Start from the root and go up to the last internal node
        if(arr[i] > arr[2*i+1]) return false;
        if((2*i+2)<n && arr[i]>arr[2*i+2]) return false; //Check if the right child exists and violates the property
        return true;
    }
}
//time complexity: O(n)

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << isArrMinHeap(arr, n);
    return 0;
}