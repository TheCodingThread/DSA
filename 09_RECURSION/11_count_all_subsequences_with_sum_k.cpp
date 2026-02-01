#include<bits/stdc++.h>
using namespace std;

//technique without using a global variable
int printSS(int ind, vector<int>& ds, int s, int sum, int arr[], int n){
    if(s > sum) return 0; // optimization to avoid unnecessary calls
    if(ind == n){
        if(s == sum){
            // for(auto i: ds) cout << i << " ";
            // cout << endl;
            return 1;
        }
        return 0;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];

    int l = printSS(ind+1, ds, s, sum, arr, n);

    s -= arr[ind];
    ds.pop_back();

    int r = printSS(ind+1, ds, s, sum, arr, n);
    return l+r;
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum;
    cout << "Enter sum: ";
    cin >> sum;
    vector<int> ds;
    cout << printSS(0, ds, 0, sum, arr, n);
    return 0;
}