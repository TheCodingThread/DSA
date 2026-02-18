#include<bits/stdc++.h>
using namespace std;

void recurSum(int num, vector<int>& ds, vector<vector<int>>& ans, int k, int n){
    if(k==0 && n==0){
        ans.push_back(ds);
        return;
    }
    if(k==0 || n<0) return;

    for(int i=num; i<10; i++){
        if(i>n) break;
        ds.push_back(i);
        recurSum(i+1, ds, ans, k-1, n-i);
        ds.pop_back();
    }
}

vector<vector<int>> combSum(int k, int n){
    vector<int> ds;
    vector<vector<int>> ans;
    recurSum(1, ds, ans, k, n);
    return ans;
}

int main(){
    int k, n;
    cout << "Enter k: ";
    cin >> k;
    cout << "Enter n: ";
    cin >> n;
    vector<vector<int>> res = combSum(k, n);
    for(auto i: res){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}