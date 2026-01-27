#include<bits/stdc++.h>
using namespace std;

void insert(stack<int>& s, int element) {
    if (s.empty() || s.top() <= element) {
        s.push(element);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s, element);
    s.push(temp);
}

void sortUsingRecursion(stack<int>& s) {
    if (s.empty()) return;
    int top = s.top();
    s.pop();
    sortUsingRecursion(s);
    insert(s, top);
}
//time complexity: O(n^2); space complexity: O(n)

int main(){
    stack<int> s;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        s.push(a);
    }
    sortUsingRecursion(s);
    for(int i=0; i<n; i++){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}