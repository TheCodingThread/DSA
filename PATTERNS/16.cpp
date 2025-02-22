#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1; i<6; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        for(int k=8-2*(i-1); k>0; k--){
            cout << " ";
        }
        for(int l=i; l>=1; l--){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0; i<5; i++){
        for(int j=5; j>i; j--){
            if(j==5){
                continue;
            }
            cout << "*";
        }
        for(int k=0; k<2*(i+1); k++){
                cout << " ";
        }
        for(int l=i; l<4; l++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}