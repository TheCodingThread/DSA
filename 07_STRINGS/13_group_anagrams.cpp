//Problem: Given an array of strings, group anagrams together provided in the given array of strings.
//Solution: We can use a hash map to group the anagrams together. The key of the hash map will be the sorted version of the string, and the value will be a list of strings that are anagrams of each other. We can iterate through the input array of strings, sort each string, and add it to the corresponding list in the hash map. Finally, we can return the values of the hash map as a list of lists of anagrams.

#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> grpAnagrams(vector<string>& strs){
    unordered_map<string, vector<string>> um; //this map will store the sorted version of the string as key and the list of anagrams as value
    for(auto i: strs){
        string key = i;
        sort(key.begin(), key.end());
        um[key].push_back(i);
    }
    vector<vector<string>> ans;
    for(auto& [key, group]: um) ans.push_back(group);
    return ans;
}
//time complexity: O(n*klogk); space complexity: O(n*k)

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<string> strs;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        strs.push_back(a);
    }
    vector<vector<string>> res = grpAnagrams(strs);
    for(auto i: res){
        for(auto j: i) cout << j << " ";
        cout << endl;
    }
    return 0;
}