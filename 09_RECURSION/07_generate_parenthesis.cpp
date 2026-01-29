#include<bits/stdc++.h>
using namespace std;

void genParenStr(vector<string>& v, int n, int oc, int cc, string s){
    if(oc == n && cc == n){
        v.push_back(s);
        return;
    }
    if(oc < n) genParenStr(v, n, oc+1, cc, s+"(");
    if(cc < oc) genParenStr(v, n, oc, cc+1, s+")");
}

vector<string> genParenthesis(int n){
    vector<string> v;
    int oc = 0, cc = 0;
    genParenStr(v, n, oc, cc, "");
    return v;
}
//time complexity: O(2^n)

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<string> res = genParenthesis(n);
    for(auto r: res){
        cout << r << " ";
    }
    return 0;
}