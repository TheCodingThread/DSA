//a balanced array is the one where the maximum element is at most k(given) times the minimum element
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int best = 0;

        for (int i = 0; i < n; i++) {
            long long limit = 1LL * nums[i] * k;
            int j = upper_bound(nums.begin(), nums.end(), limit) - nums.begin();
            best = max(best, j - i);
        }

        return n - best;
    }
};
