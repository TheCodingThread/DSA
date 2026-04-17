//Problem: Given an array of integers and an integer k, find the kth largest element in the array.
//Solution: We can use a min-heap (priority queue) to keep track of the k largest elements seen so far. We iterate through the array, adding each element to the min-heap. If the size of the min-heap exceeds k, we remove the smallest element. After processing all elements, the root of the min-heap will be the kth largest element.

#include<bits/stdc++.h>
using namespace std;

int kthLargestElement(vector<int>& arr, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i: arr){
        pq.push(i);
        if(pq.size() > k) pq.pop();
    }
    return pq.top();
}
//time complexity: O(nlogk); space complexity: O(k)

int main(){
    int n, k;
    cout << "Enter n: ";
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << "Enter k: ";
    cin >> k;
    cout << kthLargestElement(arr, k);
    return 0;
}