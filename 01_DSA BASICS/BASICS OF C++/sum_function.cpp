#include <iostream>
using namespace std;

void sum(int a, int b){
    cout << "The sum of the 2 numbers is: " << a+b << endl;
}

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    sum(a, b);
    return 0;
}