#include<bits/stdc++.h>
using namespace std;

class Stack{
    int top = -1;
    int st[10];

    void push(int x){
        if(top >= 10) cout << "Stack overflow!";
        st[++top] = x;
    }

    void pop(){
        if(top == -1) cout << "Stack underflow!";
        top--;
    }

    int top(){
        if(top == -1) cout << "No elements in the stack";
        return st[top];
    }

    int size(){
        return top+1;
    }
};
//space complexity: O(10)

int main(){
    return 0;
}