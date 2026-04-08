#include<bits/stdc++.h>
using namespace std;

int maxConsecOnes(vector<int>& nums, int k){
    int res = 0;
    int l = 0, r = 0;
    int zeroCnt = 0;
    for(r; r<nums.size(); r++){
        if(nums[r] == 0) zeroCnt++;
        if(zeroCnt <= k){
            int len = r-l+1;
            res = max(res, len);
        }
        else{
            while(zeroCnt>k){
                if(nums[l] == 0) zeroCnt--;
                l++;
            }
            int len = r-l+1;
            res = max(res, len);
        }
    }
    return res;
}
//time complexity: O(N)

int main(){
    int n, k;
    cout << "Enter n: ";
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }
    cout << "Enter k: ";
    cin >> k;
    cout << maxConsecOnes(nums, k);
    return 0;
}