#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int> ll= {2, 4, 6, 8};
    Node* y = new Node(ll[3], nullptr);
    cout << y <<endl;
    cout << y->data;
    return 0;
}