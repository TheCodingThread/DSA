#include<bits/stdc++.h>
using namespace std;

int main(){
    int lastdg, num, revNum = 0;
    cout << "Enter the number: ";
    cin >> num;
    while(num>0){
        lastdg = num%10;
        num=num/10;
        revNum = revNum*10 + lastdg;
    }

    cout << "Reversed number: " << revNum << endl;
    return 0;
}