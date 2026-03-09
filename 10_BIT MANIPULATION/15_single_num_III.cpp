#include<bits/stdc++.h>
using namespace std;

//there are exactly 2 elements appearing once
//hashing
// vector<int> singleNum(vector<int>& arr){
//     vector<int> ans;
//     unordered_map<int, int> um;
//     for(int i=0; i<arr.size(); i++) um[arr[i]]++;
//     for(auto i: um) if(i.second == 1) ans.push_back(i.first);
//     return ans;
// }
//time complexity: O(n + ((n/2)+1)); space complexity: O((n/2)+1)

//optimal
vector<int> singleNum(vector<int>& arr){
    long XOR = 0; //we used long for line 21
    for(int i=0; i<arr.size(); i++) XOR = XOR^arr[i];
    int rightmost = (XOR & (XOR-1)) ^ XOR;
    int b1 = 0, b2 = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] & rightmost) b1 = b1^arr[i];
        else b2 = b2^arr[i];
    }
    return {b1, b2};
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        int a;
        cin >> a; 
        arr.push_back(a);  
    }
    vector<int> res = singleNum(arr);
    for(auto i: res){
        cout << i << " ";
    }
    return 0;
}