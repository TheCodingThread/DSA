#include<bits/stdc++.h>
using namespace std;

void f(int n){
    if(n == 0) return;
    cout << n << endl;
    n--;
    f(n);
}

int main(){
    int n;
    cout << "Enter the number n: ";
    cin >> n;
    f(n);
    return 0;
}