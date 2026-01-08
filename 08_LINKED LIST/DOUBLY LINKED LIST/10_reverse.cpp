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

//brute force - storing the node value into a stack and then againing replacing the node values from stack to the dll using LIFO fashion
// Node* reverseDLL(Node* head){
//     Node* t1 = head;
//     stack<int> st;
//     while(t1 != nullptr){
//         st.push(t1->data);
//         t1 = t1->next;
//     }
//     Node* t2 = head;
//     while(t2 != nullptr){
//         t2->data = st.top();
//         st.pop();
//         t2 = t2->next;
//     }
//     return head;
// }
//time complexity: O(2N); space complexity: O(N)

//optimal - using a third variable to swap the links(next and prev)
Node* reverseDLL(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* tempNode = head;
    while(tempNode != nullptr){
        Node* tempSwap = tempNode->next;
        tempNode->next = tempNode->prev;
        tempNode->prev = tempSwap;
        if(tempNode->prev == nullptr) head = tempNode;
        tempNode = tempNode->prev;
    }
    return head;
}
//time complexity: O(N); space complexity: O(1)

int main(){
    vector<int> ll = {2, 4, 6, 8};
    Node* head = arrToDoubLL(ll);
    head = reverseDLL(head);
    print(head);
    return 0;
}