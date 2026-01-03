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

Node* insertBeforeVal(Node* head, int inNodeVal, int val){
    if(head == nullptr) return nullptr;
    if(inNodeVal == head->data) return new Node(val, head);
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->next->data == inNodeVal){
            Node* newNode = new Node(val, temp->next);
            temp->next = newNode;
            return head;
        }
        temp = temp->next;
    }
    return head;
}
//time complexity: O(N-1)

int main(){
    vector<int> ll = {2, 4, 6, 8};
    Node* head = arrToLL(ll);
    int inNodeVal, val;
    cout << "Enter the in-node val: ";
    cin >> inNodeVal;
    cout << "Enter the new-node value: ";
    cin >> val;

    head = insertBeforeVal(head, inNodeVal, val);
    print(head);
    return 0;
}