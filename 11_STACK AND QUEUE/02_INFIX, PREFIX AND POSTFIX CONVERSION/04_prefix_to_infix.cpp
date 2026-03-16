#include<bits/stdc++.h>
using namespace std;

string preToIn(string s){
    int i=s.size()-1;
    stack<string> st;
    while(i >= 0){
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
            string con = "(" + op1 + s[i] + op2 + ")";
            st.push(con);
        }
        i--;
    }
    return st.top();
}
//time complexity: O(2N); space complexity: O(N)

int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << preToIn(s);
    return 0;
}