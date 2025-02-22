#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter the age: ";
    cin >> age;
    if(age < 18){
        cout << "You are not eligible for job.";
    }
    else if(age >= 18){
        if(age >= 55 && age <= 57){
            cout << "Eligible for job but retirement soon.";
        }
        else if(age > 57){
            cout << "Retirement time.";
        }
        else{
            cout << "Eligible for job.";
        }
    }
    return 0;
}