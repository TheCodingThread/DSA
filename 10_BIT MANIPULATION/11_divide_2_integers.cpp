#include<bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor){
    if(dividend == INT_MIN && divisor == -1) return INT_MAX;
    long long absDd = llabs((long long)dividend);
    long long absDs = llabs((long long)divisor);
    long long ans = 0;
    while(absDd >= absDs){
        long long temp = absDs;
        long long multiple = 1;
        while(absDd >= (temp << 1)){
            temp <<= 1;
            multiple <<= 1;
        }
        absDd -= temp;
        ans += multiple;
    }
    if((dividend < 0) ^ (divisor < 0))
        ans = -ans;
    return (int)ans;
}
//time complexity: O((log2N)^2)

int main(){
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    cout << divide(dividend, divisor);
    return 0;
}