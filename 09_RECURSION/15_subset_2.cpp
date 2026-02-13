#include<bits/stdc++.h>
using namespace std;

//brute force - find all the possible subsets of the array and then store it in a set and again store the resultant structure in vector

//optimal - recursion
void subSetRecur(int ind, vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans){
    ans.push_back(ds);
    for(int i=0; i<nums.size(); i++){
        if(i != ind && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        subSetRecur(i+1, ds, nums, ans);
        ds.pop_back();
    }
}

vector<vector<int>> subsetWoDups(vector<int>& nums){
    vector<int> ds;
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    subSetRecur(0, ds, nums, ans);
    return ans;
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    vector<vector<int>> res = subsetWoDups(nums);
    for(auto i: res){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}