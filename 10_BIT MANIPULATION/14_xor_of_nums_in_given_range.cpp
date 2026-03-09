#include<bits/stdc++.h>
using namespace std;

//if the range is from 1 to n
// we solve it by pattern observation, if we divide the range of num in blocks of 4 we observe that:
// if num%4 == 0, it will return num
// if 1, it will return 1
// if 2, it will return num+1
// if 3, it will return 0
int xorOfNums(int n){
    int rem = n%4;
    if(rem == 0) return n;
    else if(rem == 1) return 1;
    else if(rem == 2) return n+1;
    else return 0;
}
//time complexity: O(1) 

//if the range is from nums l to r
//find xor till l-1, then again find xor till r and then finally xor both of them together
int xorOfNumsWithRange(int l, int r){
    int lXor = xorOfNums(l-1);
    int rXor = xorOfNums(r);
    return lXor ^ rXor;
}
//time complexity: O(1)

int main(){
    // int n;
    // cout << "Enter number: ";
    // cin >> n;
    // cout << xorOfNums(n);

    int l, r;
    cout << "Enter start range: ";
    cin >> l;
    cout << "Enter end range: ";
    cin >> r;
    cout << xorOfNumsWithRange(l, r);
    return 0;
}