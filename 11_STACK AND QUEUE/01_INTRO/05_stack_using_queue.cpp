#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q;
    public: 
    void push(int x){
        int s = q.size();
        q.push(x);
        for(int i=0; i<s; i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop(){
        q.pop();
    }

    int top(){
        return q.front();
    }

    int size(){
        return q.size();
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
    cout << s1.size() << endl;
    return 0;
}