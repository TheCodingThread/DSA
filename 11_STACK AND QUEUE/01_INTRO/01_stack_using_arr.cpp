#include<bits/stdc++.h>
using namespace std;

class Stack{
    int topIndex = -1;
    int st[10];

public:

    void push(int x){
        if(topIndex == 9){
            cout << "Stack overflow!\n";
            return;
        }
        st[++topIndex] = x;
    }

    void pop(){
        if(topIndex == -1){
            cout << "Stack underflow!\n";
            return;
        }
        topIndex--;
    }

    int top(){
        if(topIndex == -1){
            cout << "No elements in the stack\n";
            return -1;
        }
        return st[topIndex];
    }

    int size(){
        return topIndex + 1;
    }
};

int main(){
    Stack st1;
    st1.push(10);
    st1.push(20);
    st1.push(30);

    cout << st1.top() << endl;
    st1.pop();
    cout << st1.top() << endl;
    cout << st1.size() << endl;
    return 0;
}