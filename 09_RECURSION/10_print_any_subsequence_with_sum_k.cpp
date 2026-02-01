#include<bits/stdc++.h>
using namespace std;

//technique without using a global variable
bool printSS(int ind, vector<int>& ds, int s, int sum, int arr[], int n){
    if(ind == n){
        if(s == sum){
            for(auto i: ds) cout << i << " ";
            cout << endl;
            return true;
        }
        return false;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];

    if(printSS(ind+1, ds, s, sum, arr, n) == true) return true;

    s -= arr[ind];
    ds.pop_back();

    if(printSS(ind+1, ds, s, sum, arr, n) == true) return true;
    return false;
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
    printSS(0, ds, 0, sum, arr, n);
    return 0;
}