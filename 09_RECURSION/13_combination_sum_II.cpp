#include<bits/stdc++.h>
using namespace std;

void recurSum(int index, int target, vector<int>& ds, vector<int>& candidates, vector<vector<int>>& ans){
    if(target == 0){
        ans.push_back(ds);
        return;
    }
    for(int i=index; i<candidates.size(); i++){
        if(i>index && candidates[i]==candidates[i-1]) continue;
        if(candidates[i] > target) break;
        ds.push_back(candidates[i]);
        recurSum(i+1, target-candidates[i], ds, candidates, ans);
        ds.pop_back();
    }
}
//time complexity: 2^n *k; space complexity: k*x

vector<vector<int>> combSum2(vector<int>& candidates, int target){
    sort(candidates.begin(), candidates.end());
    vector<int> ds;
    vector<vector<int>> ans;
    recurSum(0, target, ds, candidates, ans);
    return ans;
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> candidates;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        candidates.push_back(a);
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    vector<vector<int>> res = combSum2(candidates, target);
    for(auto i: res){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}