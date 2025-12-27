#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s){
    unordered_map<char, int> um = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int ans = 0;

    for(int i=0; i<s.size(); i++){
        if(i == s.size()-1) ans+=um[s[i]];
        else if(um[s[i]] >= um[s[i+1]]) ans += um[s[i]];
        else ans -= um[s[i]];
    }

    return ans;
}

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;

    int r = romanToInt(s);
    cout << r;

    return 0;
}