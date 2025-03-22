#include<bits/stdc++.h>
using namespace std;

void f(int count){
    cout << count << endl;
    count++;
    f(count); //infinte recursion
}

int main(){
    int count = 0;
    f(count);
    return 0;
}