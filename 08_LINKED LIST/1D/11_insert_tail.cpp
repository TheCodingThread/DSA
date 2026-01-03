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

Node* arrToLL(vector<int> &arr){
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* insertTail(Node* head, int el){
    if(head == nullptr) return new Node(el, nullptr);
    Node* newNode = new Node(el, nullptr);
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->next == nullptr){
            temp->next = newNode;
            return head;
        }
        temp = temp->next;
    }
}
//time complexity: O(N)

int main(){
    vector<int> ll = {2, 4, 6, 8};
    Node* head = arrToLL(ll);
    int el;
    cout << "Enter the value to insert: ";
    cin >> el;
    head = insertTail(head, el);
    print(head);
    return 0;
}