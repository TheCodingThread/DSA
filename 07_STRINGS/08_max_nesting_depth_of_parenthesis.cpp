#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s){
    int ans = 0, cur = 0;

    for(char c: s){
        if(c == ')') cur--;
        else if(c == '(') ans = max(ans, ++cur);
    }

    return ans;
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int res = maxDepth(s);
    cout << res;

    return 0;
}