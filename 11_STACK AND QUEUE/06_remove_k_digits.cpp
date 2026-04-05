#include<bits/stdc++.h>
using namespace std;

// remove the k digits such that that resultant string is the smallest possible string(in numerical value)
string removeKdigits(string num, int k) {
    string ans;
    if(k == num.size()) return "0";
    for(char i : num){
        while(!ans.empty() && k > 0 && i < ans.back()){
            ans.pop_back();
            k--;
        }
    ans.push_back(i);
    }

    // If k still remains
    while(k > 0 && !ans.empty()){
        ans.pop_back();
        k--;
    }

    // Remove leading zeros
    int i = 0;
    while(i < ans.size() && ans[i] == '0') i++;
    ans = ans.substr(i);
    
    return ans.empty() ? "0" : ans;
}

int main(){
    string num;
    int k;
    cout << "Enter string: ";
    cin >> num;
    cout << "Enter k: ";
    cin >> k;
    cout << removeKdigits(num, k);
    return 0;
}