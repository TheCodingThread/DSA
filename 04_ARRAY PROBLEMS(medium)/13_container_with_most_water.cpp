#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height){
    int l = 0, r = height.size()-1;
    int res = 0;
    while(l<r){
        int currArea = min(height[l], height[r]) * (r-l);
        res = max(currArea, res);

        if(height[l] < height[r]) l++;
        else r--;
    }
    return res;
}
//time complexity: O(N)

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> height;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        height.push_back(a);
    }
    cout << maxArea(height);
    return 0;
}