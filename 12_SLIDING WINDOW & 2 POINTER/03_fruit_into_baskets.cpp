// in this problem, we are given an array of integers where each integer represents a type of fruit. We have two baskets and we want to put the maximum number of fruits in these baskets, but each basket can only hold one type of fruit. We need to find the length of the longest contiguous subarray that contains at most two different types of fruits.

#include<bits/stdc++.h>
using namespace std;

int maxFruits(vector<int>& fruit){
    unordered_map<int, int> um;
    int maxLen = 0;
    int l = 0, r = 0;
    for(; r<fruit.size(); r++){
        um[fruit[r]]++;
        if(um.size() <= 2) maxLen = max(maxLen, r-l+1);
        else{
            while(um.size() > 2){
                um[fruit[l]]--;
                if(um[fruit[l]] == 0) um.erase(fruit[l]);
                l++;
            }
            maxLen = max(maxLen, r-l+1);
        }
    }
    return maxLen;
}
//time complexity: O(N); space complexity: O(2)

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> fruit;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        fruit.push_back(a);
    }
    cout << maxFruits(fruit);
    return 0;
}