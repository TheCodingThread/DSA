#include<bits/stdc++.h>
using namespace std;

string lonPalSubStr(string s){
    if(s.size() == 0) return "";

    int start = 0, maxLen = 1;

    auto expand = [&](int left, int right){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            if(right-left+1 > maxLen){
                start = left;
                maxLen = right-left+1;
            }
            left--, right++;
        }
    };

    for(int i=0; i<s.size(); i++){
        expand(i, i);
        expand(i, i+1);
    }

    return s.substr(start, maxLen);
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string r = lonPalSubStr(s);
    cout << r;

    return 0;
}