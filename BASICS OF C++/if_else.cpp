#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the age: ";
    cin >> a;
    if(a >= 18) {
        cout << "You are an adult.";
    } else if(a >= 0 && a < 18) {
        cout << "You are still a child.";
    } else {
        cout << "Invalid age.";
    }
    return 0;
}