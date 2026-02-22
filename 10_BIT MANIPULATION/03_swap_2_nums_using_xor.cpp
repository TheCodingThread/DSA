#include<bits/stdc++.h>
using namespace std;

pair<int, int> swapUsingXor(int a, int b){
    pair<int, int> ans;
    a = a^b;
    b = a^b;
    a = a^b;
    ans.first = a;
    ans.second = b;
    return ans;
}

int main(){
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    pair<int, int> res = swapUsingXor(a, b);
    cout << "a: " << res.first << endl << "b: " << res.second;
    return 0;
}