#include<bits/stdc++.h>
using namespace std;

// int clearLastSetBit(int n){
//     int i = 0;
//     while((n & (~(1<<i))) == n) i++;
//     return n & (~(1<<i));
// }

//one liner
int clearLastSetBit(int n){
    return n & (n-1);
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << clearLastSetBit(n);
    return 0;
}