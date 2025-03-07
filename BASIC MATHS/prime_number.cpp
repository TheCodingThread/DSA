#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, flag = 0;
    cout << "Enter the number: ";
    cin >> num;
    for(int i = 2; i<num; i++){
        if(num%i == 0){
            flag = 1;
            break;
        }else{
            flag = 0;
        }
    }

    if(flag == 1){
        cout << num << " is not a prime number." << endl;
    }else{
        cout << num << " is a prime number." << endl;
    }
    return 0;
}