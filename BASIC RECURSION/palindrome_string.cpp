#include<bits/stdc++.h>
using namespace std;

int pdStr(string str, int n, int i){
    if(i>=n/2) return true;
    if(str[i]!=str[n-i-1]) return false;
    return pdStr(str, n, i+1);
}

int main(){
    string str;
    int n, i = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    n = str.length();
    if(pdStr(str, n, i) == 1) cout << "The String is a palindrome.";
    else cout << "The String is not a palindrome.";
    return 0;
}