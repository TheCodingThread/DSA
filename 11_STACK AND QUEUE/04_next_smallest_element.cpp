#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallestEle(vector<int>& nums){
    vector<int> ans(nums.size());
    stack<int> st;
    for(int i=nums.size()-1; i>=0; i--){
        while(!st.empty() && st.top()>=nums[i]) st.pop();
        if(!st.empty()) ans[i] = st.top();
        else ans[i] = -1;
        st.push(nums[i]);
    }
    return ans;
}
//time complexity: O(N); space complexity: O(N)

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
    vector<int> res = nextSmallestEle(nums);
    for(auto i: res){
        cout << i << " ";
    }
    return 0;
}