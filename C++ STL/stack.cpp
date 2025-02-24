#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s1; //initialisation
    // Stack follows LIFO order, that is, Last In First Out. It means that last element added to the stack will be the first one to be removed

    s1.push(1); //includes 1 to the stack
    s1.push(2); 
    s1.push(3);
    s1.push(4);

    cout << "Top element: " << s1.top() << endl; //returns the top element or the last element included in the stack

    s1.pop(); //removes the top element

    // Other functions: empty(), size(), swap()

    // The operations of stack, that is, push, pop and top runs in O(1) time complexity, that is, constant time complexity
    return 0;
}