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

Node* delTail(Node* head){
    if(head == nullptr || head->next == nullptr) return NULL; //for single element
    Node* temp = head;
    while(temp->next->next != nullptr) temp = temp->next;
    free(temp->next);
    temp->next = nullptr;
    return head;
}

int main(){
    vector<int> ll = {2, 4, 6, 8};
    Node* head = arrToLL(ll);
    head = delTail(head);
    print(head);
    return 0;
}