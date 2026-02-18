#include<bits/stdc++.h>
using namespace std;

void recurComb(int ind, string& digits, string& ds, vector<string>& map, vector<string>& ans){
    if(ind == digits.size()){
        ans.push_back(ds);
        return;
    }

    string letters = map[digits[ind]-'0'];

    for(char ch: letters){
        ds.push_back(ch);
        recurComb(ind+1, digits, ds, map, ans);
        ds.pop_back();
    }
}

vector<string> letterComb(string digits){
    if(digits.empty()) return {};
    vector<string> ans;
    vector<string> map = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    string ds = "";
    recurComb(0, digits, ds, map, ans);
    return ans;
}

int main(){
    string digits;
    cout << "Enter string: ";
    cin >> digits;
    vector<string> res = letterComb(digits);
    for(auto i: res){
        for(auto j: i){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}