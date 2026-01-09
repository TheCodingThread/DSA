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

//brute force
// Node* revLL(Node* head){
//     if(head == nullptr || head->next == nullptr) return head;
//     stack<int> st;
//     Node* t1 = head;
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

//optimal
Node* revLL(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* temp = head;
    Node* prevNode;
    while(temp != nullptr){
        Node* prev = temp->next;
        if(temp == head) temp->next = nullptr;
        else if(temp->next == nullptr){
            head = temp;
            temp->next = prevNode;
            break;
        }
        else temp->next = prevNode;
        prevNode = temp;
        temp = prev;
    }
    return head;
}
//time complexity: O(N); space complexity: O(1)

int main(){
    int n;
    vector<int> ll;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        ll.push_back(a);
    }
    
    Node* head = arrToLL(ll);

    head = revLL(head);
    print(head);
    return 0;
}