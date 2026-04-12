//in this problem, we are given an array of points on cards and a number k. We can take k cards from either the start or the end of the array. We need to find the maximum points we can get by taking k cards.

#include<bits/stdc++.h>
using namespace std;

int maxPts(vector<int>& cardPts, int k){
    int n = cardPts.size();
    int l = k-1, r = n-1, sum = 0, maxSum = 0;
    for(int i=0; i<k; i++) sum += cardPts[i];
    maxSum = max(maxSum, sum);
    while(l>=0 && r>=n-k){
        sum -= cardPts[l];
        l--;
        sum += cardPts[r];
        r--;
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
//time complexity: O(2k)

int main(){
    int n, k;
    cout << "Enter n: ";
    cin >> n;
    vector<int> cardPts;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        cardPts.push_back(a);
    }
    cout << "Enter k: ";
    cin >> k;
    cout << maxPts(cardPts, k);
    return 0;
}