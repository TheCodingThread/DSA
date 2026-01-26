#include<bits/stdc++.h>
using namespace std;

//brute force
// double Pow(double x, int n){
//     double ans = 1;
//     if(n < 0){
//         long long x = abs(n);
//         for(int i=0; i<x; i++) ans *= x;
//         return 1/ans;
//     }
//     for(int i=0; i<n; i++) ans *= x;
//     return ans;
// }
//time complexity: O(n)

//optimal
double Pow(double x, int n){
    double ans;
    long long a = n;
    if(a<0) a = -1*a;
    if(a == 0) return 1;
    if(a%2 == 0) ans = Pow(x*x, a/2);
    else ans = x * Pow(x, a-1);
    if(n<0) ans = 1/ans;
    return ans;
}
//time complexity: O(logn)

int main(){
    double x;
    int n;
    cout << "Enter the number: ";
    cin >> x;
    cout << "Enter the power: ";
    cin >> n;
    cout << Pow(x, n);
    return 0;
}