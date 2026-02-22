#include<bits/stdc++.h>
using namespace std;

int setBit(int n, int i){
    return n | (1<<i);
}

int main(){
    int n, i;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter bit number: ";
    cin >> i;
    cout << setBit(n, i);
    return 0;   
}