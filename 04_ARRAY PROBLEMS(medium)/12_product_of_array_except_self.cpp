//Problem: In this problem, we are given an array of integers and we need to return an array where each element at index i is the product of all the elements in the original array except the one at index i.
//Solution: Use two passes - First pass (left to right): store product of all elements to the left of each index. Second pass (right to left): multiply by product of all elements to the right.

#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n, 1);

    for(int i = 1; i < n; i++) answer[i] = answer[i - 1]*nums[i - 1];

    int suffix = 1;
    for(int i = n - 2; i >= 0; i--) {
        suffix *= nums[i + 1];
        answer[i] *= suffix;
    }

    return answer;
}
//time complexity: O(N)