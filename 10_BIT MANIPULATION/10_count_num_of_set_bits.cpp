#include<bits/stdc++.h>
using namespace std;

// int numOfSetBits(int n){
//     int cnt = 0;
//     while(n != 0){
//         cnt += (n&1);
//         n = n >> 1;
//     }
//     return cnt;
// }

//built-in function
// int numOfSetBits(int n){
//     return __builtin_popcount(n);
// }

int numOfSetBits(int n){
    int cnt = 0;
    while(n != 0){
        n = n & (n-1);
        cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << numOfSetBits(n);
    return 0;
}