#include<bits/stdc++.h>
using namespace std;

int singleEleInArr(vector<int>& arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    return ans;
}

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
    cout << singleEleInArr(arr);
    return 0;
}