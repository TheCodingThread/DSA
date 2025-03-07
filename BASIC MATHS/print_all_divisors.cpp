#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The divisors of " << num << " are: ";
    for(int i = 1; i<=num; i++){
        if(num%i == 0){
            cout << i << " ";
        }
    }
    return 0;
}