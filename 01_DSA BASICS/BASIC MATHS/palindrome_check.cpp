#include<bits/stdc++.h>
using namespace std;

int main(){
    int lastdg, expnum, num, revNum = 0;
    cout << "Enter the number: ";
    cin >> num;
    expnum = num;
    while(expnum>0){
        lastdg = expnum%10;
        expnum=expnum/10;
        revNum = revNum*10 + lastdg;
    }

    if(num == revNum){
        cout << "The number is a palindrome." << endl;
    }else{
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}