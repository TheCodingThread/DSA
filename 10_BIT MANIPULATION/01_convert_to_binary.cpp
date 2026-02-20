#include<bits/stdc++.h>
using namespace std;

string con2Bin(int n){
    string res = "";
    while(n != 0){
        if(n%2 == 1) res += '1';
        else res += '0';
        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}
//time complexity: O(log2n); space complexity: O(log2n)

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << con2Bin(n);
    return 0;
}