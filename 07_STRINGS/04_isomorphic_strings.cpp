#include<bits/stdc++.h>
using namespace std;

//eg. egg and add are isomorphic to each other

bool isoStr(string s, string t){
    char ms[128] = {0};
    char mt[128] = {0};
    for(int i=0; i<s.size(); i++){
        if(ms[s[i]] != mt[t[i]]) return false;
        ms[s[i]] = i+1;
        mt[t[i]] = i+1;
    }
    return true;
}

int main(){
    string s, t;
    cout << "Enter the string 1: ";
    cin >> s;
    cout << "Enter the string 2: ";
    cin >> t;

    bool result = isoStr(s, t);
    cout << result << endl;

    return 0;
}