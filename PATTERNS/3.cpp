#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i=0; i<5; i++){
        for(int j=0; j<(4-i); j++){
            cout << " ";
        }
        for(int k=0; k<(2*i+1); k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}