//Problem: Given an array of integers, replace each element with its rank in the sorted order of the array. If there are duplicate numbers, they should have the same rank.
//Solution: We can create a copy of the original array and sort it. Then, we can use an unordered map to store the rank of each unique element. Finally, we can iterate through the original array and replace each element with its corresponding rank from the map.

#include<bits/stdc++.h>
using namespace std;

vector<int> replaceElementsByRank(vector<int>& arr){
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    unordered_map<int, int> um;
    int rank = 1;
    for(auto i: sortedArr){
        if(um.find(i) == um.end()) um[i] = rank++;
    }
    
    vector<int> res;
    for(auto i: arr){
        res.push_back(um[i]);
    }
    return res;
}
//time complexity: O(n log n); space complexity: O(n)

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
    vector<int> ans = replaceElementsByRank(arr);
    for(auto i: ans) cout << i << " ";
    return 0;
}