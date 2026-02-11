#include<bits/stdc++.h>
using namespace std;

//brute force - power set (time complexity: (2^n)*N)

//optimal
void possSubSum(int i, int sum, vector<int>& arr, vector<int>& ans){
    if(i == arr.size()){
        ans.push_back(sum);
        return;
    }

    possSubSum(i+1, sum + arr[i], arr, ans);
    possSubSum(i+1, sum, arr, ans);
}

vector<int> subSum(vector<int>& arr){
    vector<int> ans;
    possSubSum(0, 0, arr, ans);
    sort(ans.begin(), ans.end());
    return ans;
}
//time complexity: O(2^n + ((2^n)logn))

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    vector<int> result = subSum(arr);
    for(auto i: result){
        cout << i << " ";
    }
    return 0;
}