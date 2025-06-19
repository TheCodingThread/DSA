#include<bits/stdc++.h>
using namespace std;

void f(int count){
    if(count == 10){
        return;
    }
    cout << count << endl;
    count++;
    f(count); //infinite recursion until condition is met
}

int main(){
    int count = 0;
    f(count);
    return 0;
}