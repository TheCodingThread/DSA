#include<bits/stdc++.h>
using namespace std;

//brute force
vector<vector<int>> mergeIntervals(vector<vector<int>> &vec, int n){
    sort(vec.begin(), vec.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        int start = vec[i][0];
        int end = vec[i][1];
        if(!ans.empty() && end <= ans.back()[1]){
            continue;
        }
        for(int j=i+1; j<n; j++){
            if(vec[j][0] <= end){
                end = max(end, vec[j][1]);
            }
            else{
                break;
            }
        }
        ans.push_back({start, end});
    }
    return ans;
}
//time complexity: O(NlogN) + O(2N); space complexity: O(N)

//optimal - performing the code in just one iteration
vector<vector<int>> mergeIntervals(vector<vector<int>> &vec, int n){
    sort(vec.begin(), vec.end());
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(ans.empty() || vec[i][0] > ans.back()[1]) ans.push_back(vec[i]);
        else ans.back()[1] = max(ans.back()[1], vec[i][1]);
    }
    return ans;
}
//time complexity: O(NlogN)+O(N); space complexity: O(N)

int main(){
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<vector<int>> vec;
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<2; j++){
            int x;
            cin >> x;
            vec[i].push_back(x);
        }
    }

    vector<vector<int>> result = mergeIntervals(vec, n);
    for(auto i:result){
        for(auto j:i){
            cout << i[j] << " ";
        }
        cout << endl;
    }

    return 0;
}