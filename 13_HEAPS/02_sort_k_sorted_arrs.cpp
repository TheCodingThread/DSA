//Problem: Sort K Sorted Arrays
//Solution: We can use a min-heap (priority queue) to keep track of the k smallest elements seen so far. We iterate through the array, adding each element to the min-heap. If the size of the min-heap exceeds k, we remove the smallest element and add it to the result array. After processing all elements, we pop all remaining elements from the min-heap and add them to the result array. (Sliding window concept used)

#include<bits/stdc++.h>
using namespace std;

vector<int> sortKSortedArr(vector<int>& arr, int k){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<=k && i<arr.size(); i++) pq.push(arr[i]);
    vector<int> ans;
    for(int i=k+1; i<arr.size(); i++){
        ans.push_back(pq.top());
        pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
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
    vector<int> res = sortKSortedArr(arr, k);
    for(auto i: res) cout << i << " ";
    return 0;
}