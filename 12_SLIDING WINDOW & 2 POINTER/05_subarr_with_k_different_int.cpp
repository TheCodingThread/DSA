//in this problem, we are given an array of integers and a number k. We need to find the number of subarrays that have exactly k different integers.
// to solve it we can find the number of subarrays that have at most k different integers and the number of subarrays that have at most k-1 different integers. The difference between these two will give us the number of subarrays that have exactly k different integers.

#include<bits/stdc++.h>
using namespace std;

int findNoOfSubarr(vector<int>& nums, int k){
    int l = 0, r = 0, cnt = 0;
    unordered_map<int, int> um;
    for(r; r<nums.size(); r++){
        um[nums[r]]++;
        while(um.size() > k){
            um[nums[l]]--;
            if(um[nums[l]] == 0) um.erase(nums[l]);
            l++;
        }
        cnt += (r-l+1);
    }
    return cnt;
}

int noOfSubarr(vector<int>& nums, int k){
    return findNoOfSubarr(nums, k) - findNoOfSubarr(nums, k-1);
}

int main(){
    int n, k;
    cout << "Enter n: ";
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    cout << "Enter k: ";
    cin >> k;
    cout << noOfSubarr(nums, k);
    return 0;
}