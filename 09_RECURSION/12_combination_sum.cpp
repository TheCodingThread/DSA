#include<bits/stdc++.h>
using namespace std;

void recurSum(int index, int target, vector<int>& recurAns, vector<int>& candidates, vector<vector<int>>& ans){
    if(index == candidates.size()){
        if(target == 0) ans.push_back(recurAns);
        return;
    }

    if(target >= candidates[index]){
        recurAns.push_back(candidates[index]);
        recurSum(index, target-candidates[index], recurAns, candidates, ans);
        recurAns.pop_back();
    }
    
    recurSum(index+1, target, recurAns, candidates, ans);
}

vector<vector<int>> combSum(vector<int>& candidates, int target){
    vector<vector<int>> ans;
    vector<int> recurAns;
    recurSum(0, target, recurAns, candidates, ans);
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
    vector<vector<int>> res = combSum(candidates, target);
    for(auto i: res){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}