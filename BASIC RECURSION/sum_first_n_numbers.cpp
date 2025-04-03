#include<bits/stdc++.h>
using namespace std;

int sum(int count){
    if(count == 0){
        return 0;
    }
    return count + sum(count - 1);
}

int main(){
    int count;
    cout << "Enter the count: ";
    cin >> count;
    cout << "Sum: " << sum(count) << endl;
    return 0;
}
