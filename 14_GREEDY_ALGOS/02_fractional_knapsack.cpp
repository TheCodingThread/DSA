#include<bits/stdc++.h>
using namespace std;

int fracKnapsack(vector<vector<int>>& arr, int k){
    sort(arr.begin(), arr.end(), [](vector<int> a, vector<int> b){
        int f = a[0]/a[1];
        int s = b[0]/b[1];
        return f>s;
    });

    int res = 0;

    for(auto i: arr){
        if(k == 0) return res;
        if(k >= i[1]){
            res += i[0];
            k -= i[1];
        }
        else{
            int remaining = (i[0]/i[1])*k;
            res += remaining;
            k = 0;
        }
    }
    return res;
}
//time complexity: O(nlogn)

int main(){
    int n, k;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    vector<vector<int>> arr(n, vector<int>(2));
    for(int i=0; i<n; i++) for(int j=0; j<2; j++) cin >> arr[i][j];
    cout << fracKnapsack(arr, k);
    return 0;
}