#include<bits/stdc++.h>
using namespace std;

class Queue{
    int q[10];
    int currSize = 0, start = -1, end = -1;

public:

    void push(int x){
        if(currSize == 10){
            cout << "Queue overflow!";
            return;
        }
        if(start = -1){
            start++, end++;
            return;
        }
        end = (end+1)%10;
        q[end] = x;
        currSize++;
    }

    void pop(){
        if(start == -1){
            cout << "Queue underflow!";
            return;
        }
        if(currSize == 1){
            start = -1, end = -1;
            return;
        }
        start = (start+1)%10;
        currSize--;
    }

    int top(){
        if(start == -1){
            cout << "No elements in queue";
            return 0;
        }
        return q[start];
    }

    int size(){
        return currSize;
    }
};
//space complexity: O(10)

int main(){
    Queue q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    cout << q1.top() << endl;
    q1.pop();
    cout << q1.top() << endl;
    cout << q1.size() << endl;
    return 0;
}