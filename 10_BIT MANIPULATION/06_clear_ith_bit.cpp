#include<bits/stdc++.h>
using namespace std;

int clearBit(int n, int i){
    return n & (~(1<<i));
}

int main(){
    int n, i;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter bit number: ";
    cin >> i;
    cout << clearBit(n, i);
    return 0;
}