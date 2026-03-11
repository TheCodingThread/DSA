#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The divisors of " << num << " are: ";
    // for(int i = 1; i<=num; i++){
    //     if(num%i == 0){
    //         cout << i << " ";
    //     }
    // }
    
    //optimal - by observation
    for(int i=0; i*i<=num; i++){
        if(num%i == 0){
            cout << i << " ";
            if(i != num/i){
                cout << num/i << " ";
            }
        }
    }
    //time complexity: O(sqrt(n))
    return 0;
}