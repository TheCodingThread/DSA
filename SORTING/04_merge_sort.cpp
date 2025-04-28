#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){ 
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){ //if any elements are left in the left half
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){ //if any elements are left in right half
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){ //copying the sorted elements to the original array
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    if(low==high){ //base case
        return;
    } 
    int mid = (low+high)/2;
    mergeSort(arr, low, mid); 
    mergeSort(arr, mid+1, high); 
    merge(arr, low, mid, high); 
}

int main(){
    //It follows divide and merge approach. It divides the array into two halves, sorts them and then merges them.
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);

    cout << "Sorted array: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    //the best time complexity is O(nlogn) in all cases, the space complexity is O(n) because we are using a temporary array to store the sorted elements

    return 0;
}