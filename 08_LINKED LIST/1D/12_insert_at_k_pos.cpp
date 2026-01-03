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

Node* insertk(Node* head, int pos, int val){
    if(head == NULL) return new Node(val, nullptr);
    if(pos == 1) return new Node(val, head);
    Node* temp = head;
    int cnt = 0;
    while(temp!=nullptr){
        cnt++;
        if(cnt == pos-1){
            Node* newNode = new Node(val, temp->next);
            temp->next = newNode;
            return head;
        }
        temp = temp->next;
    }
    return head;
}
//time complexity: O(N)

int main(){
    vector<int> ll = {2, 4, 6, 8};
    Node* head = arrToLL(ll);
    int pos, val;
    cout << "Enter the position to insert: ";
    cin >> pos;
    cout << "Enter the value: ";
    cin >> val;

    head = insertk(head, pos, val);
    print(head);
    return 0;
}