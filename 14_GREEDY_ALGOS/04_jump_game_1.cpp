#include<bits/stdc++.h>
using namespace std;

bool jumpGame(vector<int>& nums){
    int maxIdx = 0;
    for(int i=0; i<nums.size(); i++){
        if(i > maxIdx) return false;
        maxIdx = max(maxIdx, i+nums[i]);
    }
    return true;
}

int main(){
    int n;
    cout << "Enter elements: ";
    cin >> n;

    vector<int> nums(n);
    for(int i=0; i<n; i++) cin >> nums[i];

    cout << jumpGame(nums);
    return 0;
}