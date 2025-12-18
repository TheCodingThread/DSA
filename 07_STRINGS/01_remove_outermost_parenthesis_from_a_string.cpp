#include<bits/stdc++.h>
using namespace std;

string remOuterPrt(string s){
    int depth = 0;
    string ans;

    for(char c : s){
        if(c == '('){
            if(depth > 0) ans.push_back(c);
            depth++;
        }
        else{
            depth--;
            if(depth > 0) ans.push_back(c);
        }
    }

    return ans;
}
//time complexity: O(n)

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string result = remOuterPrt(s);
    cout << "String without outermost parenthesis: " << result << endl;

    return 0;
}