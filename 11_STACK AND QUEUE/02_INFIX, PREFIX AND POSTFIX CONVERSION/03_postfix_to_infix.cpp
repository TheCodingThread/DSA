#include<bits/stdc++.h>
using namespace std;

string postToIn(string s){
    int i=0;
    stack<string> st;
    while(i < s.size()){
        char c = s[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            string t;
            t.push_back(c);
            st.push(t);
        }
        else{
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            string con = "(" + op2 + s[i] + op1 + ")";
            st.push(con);
        }
        i++;
    }
    return st.top();
}
//time complexity: O(N)+O(N); space complexity: O(N)

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << postToIn(s);
    return 0;
}