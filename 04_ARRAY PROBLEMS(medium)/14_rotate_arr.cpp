// Problem: Given an array, rotate the array to the right by k steps, where k is non-negative.
// Solution: We can reverse the first k elements, then reverse the remaining n-k elements and finally reverse the whole array. This will give us the rotated array.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

//time complexity: O(n)