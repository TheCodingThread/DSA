//Problem: In a binary array, find the maximum number of consecutive 1's in the array.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                int count = 1;
                while(++i<nums.size() && nums[i] == 1) count++;
                res = max(res, count);
            }
        }
        return res;
    }
};
//time complexity: O(n)