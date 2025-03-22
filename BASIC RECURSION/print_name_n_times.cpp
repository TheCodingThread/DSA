#include<bits/stdc++.h>
using namespace std;

void f(int count, string name){
    if(count == 0){
        return;
    }
    cout << name << endl;
    count--;
    f(count, name);
}

int main(){
    int count;
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter the number of times you want to print your name: ";
    cin >> count;
    f(count, name);
    return 0;
}

//The time complexity of this code is O(n), where n is the number of times the name is printed
//The space complexity of this code is O(n)