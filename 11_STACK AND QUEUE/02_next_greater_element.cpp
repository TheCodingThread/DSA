#include<bits/stdc++.h>
using namespace std;

// next greater element of an element in array is the first greater element encountered to the right traversal of that element

// vector<int> nextGreaterEle(vector<int>& nums1, vector<int>& nums2){
//     vector<int> ans(nums1.size());
//     for(int i=0; i<nums1.size(); i++){
//         stack<int> st;
//         for(int j=nums2.size()-1; j>=0; j--){
//             while(!st.empty() && st.top()<=nums2[j]){
//                 st.pop();
//             }
//             if(nums1[i] == nums2[j]){
//                 if(!st.empty()) ans[i] = st.top();
//                 else ans[i] = -1;
//                 break;
//             }
//             st.push(nums2[j]);
//         }
//     }
//     return ans;
// }
//time complexity: O(n*m)

vector<int> nextGreaterEle(vector<int>& nums1, vector<int>& nums2){
    stack<int> st;
        unordered_map<int,int> mp;
        for(int num : nums2){
            while(!st.empty() && num > st.top()){
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        vector<int> ans;
        for(int num : nums1){
            if(mp.count(num)) ans.push_back(mp[num]);
            else ans.push_back(-1);
        }
        return ans;
}
//time complexity: O(n+m)

int main(){
    int n1, n2;
    cout << "Enter size 1: ";
    cin >> n1;
    vector<int> nums1;
    for(int i=0; i<n1; i++){
        int a;
        cin >> a;
        nums1.push_back(a);
    }
    cout << "Enter size 2: ";
    cin >> n2;
    vector<int> nums2;
    for(int i=0; i<n2; i++){
        int a;
        cin >> a;
        nums2.push_back(a);
    }
    vector<int> res = nextGreaterEle(nums1, nums2);
    for(auto i: res){
        cout << i << " ";
    }
    return 0;
}