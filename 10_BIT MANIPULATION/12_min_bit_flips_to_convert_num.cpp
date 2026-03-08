#include<bits/stdc++.h>
using namespace std;

int minBitFlips(int s, int g){
    int ans = s ^ g;
    int cnt = 0;
    for(int i=0; i<32; i++){
        if(ans & (1<<i)) cnt++;
    }
    return cnt;
}

int main(){
    int s, g;
    cout << "Enter start: ";
    cin >> s;
    cout << "Enter goal: ";
    cin >> g;
    cout << minBitFlips(s, g);
    return 0;
}