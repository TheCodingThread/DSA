#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=1; i<5; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int k=6-2*(i-1); k>0; k--){
            cout << " ";
        }
        for(int l=i; l>=1; l--){
            cout << l;
        }
        cout << endl;
    }
    return 0;
}