#include<bits/stdc++.h>
using namespace std;

void genBinaryStr(int n, string curr, vector<string>& res){
    if(curr.length() == n){
        res.push_back(curr);
        return;
    }

    genBinaryStr(n, curr+"0", res);

    if(curr.empty() || curr.back()!='1') genBinaryStr(n, curr+"1", res);
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<string> res;
    genBinaryStr(n, "", res);
    for(auto& s: res){
        cout << s << " ";
    }
    return 0;
}