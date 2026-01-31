#include<bits/stdc++.h>
using namespace std;

//the powerset has 2^n elements in it, which(in bits) can be represented as 1<<n. Now we check for each iteration if the bit is set or not by (i & (1<<m)). If yes, that will our element of the powerset.

vector<vector<int>> powerSet(vector<int>& nums){
    vector<vector<int>> ans;
    for(int i=0; i<(1<<nums.size()); i++){
        vector<int> subSet;
        for(int j=0; j<nums.size(); j++){
            if(i & (1<<j)) subSet.push_back(nums[j]);
        }
        ans.push_back(subSet);
    }
    return ans;
}
//time complexity: O(n × 2ⁿ)

int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    vector<vector<int>> res = powerSet(nums);
    for(auto i: res){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}