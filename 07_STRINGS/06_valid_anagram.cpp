#include<bits/stdc++.h>
using namespace std;

bool valAna(string s, string t){
    unordered_map<char, int> ums;
    unordered_map<char, int> umt;

    for(auto &c: s) ums[c]++;
    for(auto &c: t) umt[c]++;

    return ums == umt;
}

int main(){
    string s, t;
    cout << "Enter first string: ";
    cin >> s; 
    cout << "Enter second string: ";
    cin >> t;

    bool result = valAna(s, t);
    cout << result << endl;

    return 0;
}