#include<bits/stdc++.h>
using namespace std;

const long long M = 1e9 + 7;

long long modPow(long long base, long long exp) {
    long long res = 1;
    base %= M;

    while (exp > 0) {
        if (exp & 1) res = (res * base) % M;
        base = (base * base) % M;
        exp >>= 1;
    }
    return res;
}

int countGoodNumbers(long long n) {
    long long even = (n + 1) / 2;
    long long odd = n / 2;

    long long ans = (modPow(5, even) * modPow(4, odd)) % M;
    return ans;
}

int main(){
    long long n;
    cout << "Enter the number: ";
    cin >> n;
    cout << countGoodNumbers(n);
    return 0;
}