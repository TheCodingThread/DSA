#include<bits/stdc++.h>
using namespace std;

// int toggleBit(int n, int i){
//     if((n & (1<<i)) != 0){
//         return n & (~(1<<i));
//     }
//     else{
//         return n | (1<<i);
//     }
// }

//using xor
int toggleBit(int n, int i){
    return n ^ (1<<i);
}

int main(){
    int n, i;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter bit number: ";
    cin >> i;
    cout << toggleBit(n, i);
    return 0;
}