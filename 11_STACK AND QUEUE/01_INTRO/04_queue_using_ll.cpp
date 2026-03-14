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

class Queue{
    int size = 5, currSize = 0;
    Node* start = nullptr;
    Node* end = nullptr;

    public:
    void push(int x){
        if(currSize == size){
            cout << "Queue overflow!";
            return;
        }
        Node* newNode = new Node(x, nullptr);
        currSize++;
        if(currSize == 1){
            start = newNode;
            end = newNode;
        }
        else{
            end->next = newNode;
            end = newNode;
        }
    }

    void pop(){
        if(currSize == 0){
            cout << "Queue underflow!";
            return;
        }
        if(currSize == 1) start = nullptr, end = nullptr, currSize--;
        else{
            start = start->next;
            currSize--;
        }
    }

    int top(){
        if(currSize == 0) cout << "No elements in queue";
        else return start->data;
    }

    int QSize(){
        return currSize;
    }
};

int main(){
    Queue q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    cout << q1.top() << endl;
    q1.pop();
    cout << q1.top() << endl;
    cout << q1.QSize() << endl;
    return 0;
}