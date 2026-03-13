#include<bits/stdc++.h>
using namespace std;

//for this we use 2 stacks:
// during push() - 1. initially we move all the elements from s1 to s2
// 2. push the elment in s1
// 3. then move the elements from s2 to s1

class Queue{
    stack<int> st1;
    stack<int> st2;

    public:
    void push(int x){
        int s1 = st1.size();

        for(int i=0; i<s1; i++){
            st2.push(st1.top());
            st1.pop();
        }

        st1.push(x);

        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
    }

    void pop(){
        st1.pop();
    }

    int top(){
        return st1.top();
    }

    int size(){
        return st1.size();
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
    cout << q1.size() << endl;
    return 0;
}