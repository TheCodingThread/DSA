#include<bits/stdc++.h>
using namespace std;

//next greater element in circular array

vector<int> nextGreaterEle(vector<int>& nums){
    stack<int> st;
    int n = nums.size();
    vector<int> ans(n);
    for(int i=(2*n-1); i>=0; i--){
        while(!st.empty() && st.top()<=nums[i%n]) st.pop();
        if(i<n) ans[i] = st.empty() ? -1 : st.top();
        st.push(nums[i%n]);
    }
    return ans;
}
//time complexity: O(4N); space complexity: O(2N)

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
    vector<int> res = nextGreaterEle(nums);
    for(auto i: res){
        cout << i << " ";
    }
    return 0;
}