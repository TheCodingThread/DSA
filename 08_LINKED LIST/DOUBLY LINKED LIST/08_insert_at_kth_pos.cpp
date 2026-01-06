#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
};

Node* arrToDoubLL(vector<int> &arr){
    if(arr.size() == 0) return nullptr;
    Node* head = new Node(arr[0], nullptr, nullptr);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
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

Node* insertAtk(Node* head, int newNodeVal, int k){
    if(head == nullptr) return head;
    int cnt = 0;
    Node* temp = head;
    if(k == 1){
        Node* newNode = new Node(newNodeVal, temp, nullptr);
        temp->prev = newNode;
        return newNode;
    }
    while(temp != nullptr){
        cnt++;
        if(cnt == k){
            Node* newNode = new Node(newNodeVal, temp, temp->prev);
            temp->prev->next = newNode;
            temp->prev = newNode;
            return head;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> ll = {2, 4, 6, 8};
    Node* head = arrToDoubLL(ll);
    int newNodeVal, k;
    cout << "Enter the node value: ";
    cin >> newNodeVal;
    cout << "Enter k: ";
    cin >> k;
    head = insertAtk(head, newNodeVal, k);
    print(head);
    return 0;
}