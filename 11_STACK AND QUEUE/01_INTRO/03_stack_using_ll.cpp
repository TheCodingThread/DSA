#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

class Stack{
    Node* topInd = nullptr;
    int size = 5;
    int currSize = 0;

    public:
    void push(int x){
        if(currSize == 5){
            cout << "Stack overflow!";
            return;
        }
        Node* newNode = new Node(x, topInd);
        topInd = newNode;
        currSize++;
    }

    void pop(){
        if(currSize == 0){
            cout << "Stack underflow!";
            return;
        }
        topInd = topInd->next;
        currSize--;
    }

    int top(){
        if(currSize == 0){
            cout << "No elements in the stack";
            return 0;
        }
        return topInd->data;
    }

    int stkSize(){
        return currSize;
    }
};

int main(){
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout << s1.top() << endl;
    s1.pop();
    cout << s1.top() << endl;
    cout << s1.stkSize() << endl;
    return 0;
}