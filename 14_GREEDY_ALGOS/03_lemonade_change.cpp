#include<bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int>& bills){
    int count5 = 0, count10 = 0;
    for(auto i: bills){
        if(i == 5) count5++;
        else if(i == 10){
            if(count5) count10++, count5--;
            else return false;
        }
        else{
            if(count10 && count5) count10--, count5--;
            else if(count5 >= 3) count5 -= 3;
            else return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> bills;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        bills.push_back(a);
    }
    cout << lemonadeChange(bills);
    return 0;
}