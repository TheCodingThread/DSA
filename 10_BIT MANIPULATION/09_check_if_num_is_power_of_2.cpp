#include<bits/stdc++.h>
using namespace std;

bool powerOf2(int n){
    return n > 0 && (n & (n - 1)) == 0;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << powerOf2(n);
    return 0;
}