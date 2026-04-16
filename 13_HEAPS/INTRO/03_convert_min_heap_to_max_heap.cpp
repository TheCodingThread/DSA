#include<bits/stdc++.h>
using namespace std;

void maxHeapify(vector<int>& arr, int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    if(left<n && arr[left]>arr[largest]) largest = left;
    if(right<n && arr[right]>arr[largest]) largest = right;
    if(largest != i){
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void convertToMaxHeap(vector<int>& arr, int n){
    for(int i=(n-2)/2; i>=0; i--) maxHeapify(arr, n, i);
}
//time complexity: O(n); space complexity: O(logn)

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
    convertToMaxHeap(arr, n);
    for(auto i: arr) cout << i << endl;
    return 0;
}