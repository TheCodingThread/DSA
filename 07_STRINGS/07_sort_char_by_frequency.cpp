#include<bits/stdc++.h>
using namespace std;

string sortStr(string s){
    vector<pair<int, char>> vp(123);

    for(char c: s) vp[c] = {vp[c].first+1, c};

    sort(vp.begin(), vp.end());

    string r = "";
    for(auto p: vp) r = string(p.first, p.second) + r;
    
    return r;
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string result = sortStr(s);
    cout << result << endl;

    return 0;
}