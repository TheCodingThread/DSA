#include<bits/stdc++.h>
using namespace std;

int pdStr(string &str, int i){
    for(char &c : str) c = tolower(c);
    
    str.erase(remove_if(str.begin(), str.end(), [](char c) {
        return !isalnum(c);
    }), str.end());

    int n = str.length();

    if(i>=n/2) return true;
    if(str[i]!=str[n-i-1]) return false;
    return pdStr(str, i+1);
}

int main(){
    string str;
    int n, i = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    if(pdStr(str, i) == 1) cout << "The String is a palindrome.";
    else cout << "The String is not a palindrome.";
    return 0;
}