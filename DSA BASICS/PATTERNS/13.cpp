#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0; i<4; i++){
        char l = 'A';
        for(int j=4; j>i; j--){
            cout << " ";
        }
        for(int k=1; k<=2*i+1; k++){
            if(k>(((2*i+1)/2)+1)){
                l--;
            }
            cout << l;
            if(k<(((2*i+1)/2)+1)){
                l++;
            }
        }
        cout << endl;
    }
    return 0;
}