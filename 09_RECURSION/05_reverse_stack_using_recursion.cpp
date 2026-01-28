#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& s, int topVal){
    if(s.empty()){
        s.push(topVal);
        return;
    }

    int val = s.top();
    s.pop();

    insertAtBottom(s, topVal);

    s.push(val);
}

void revStack(stack<int>& s){
    if(s.empty()) return;

    int topVal = s.top();
    s.pop();

    revStack(s);

    insertAtBottom(s, topVal);
}
//time complexity: O(n^2)

int main(){
    stack<int> s;
    int n; 
    cout << "Enter number: ";
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        s.push(a);
    }
    revStack(s);
    for(int i=0; i<n; i++){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}