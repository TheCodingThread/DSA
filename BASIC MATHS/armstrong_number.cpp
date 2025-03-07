#include<bits/stdc++.h>
using namespace std;

int main(){
    int lastdg, num, lastdgcube = 0, expnum;
    cout << "Enter the number: ";
    cin >> num;
    expnum = num;
    while(expnum>0){
        lastdg = expnum%10;
        lastdgcube = lastdgcube + lastdg*lastdg*lastdg;
        expnum = expnum/10;
    }

    if(num == lastdgcube){
        cout << "The number is an Armstrong number." << endl;
    }else{
        cout << "The number is not an Armstrong number." << endl;
    }
    return 0;
}