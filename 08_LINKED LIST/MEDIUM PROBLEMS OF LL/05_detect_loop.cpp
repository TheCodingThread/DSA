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

//brute force - hashing
// bool detectLoop(Node* head){
//     if(head == nullptr) return false;
//     unordered_map<Node*, int> hm;
//     Node* temp = head;
//     while(temp != nullptr){
//         hm[temp]++;
//         if(hm[temp] > 1) return true;
//         temp = temp->next;
//     }
//     return false;
// }
//time complexity: O(N); space complexity: O(N)

//optimal - tortoise and hare algorithm: we take 2 pointers, slow and fast, where slow will move by 1 while fast will move by 2. If slow = fast at some point, then the LL contains a loop otherwise no
bool detectLoop(Node* head){
    if(head == nullptr) return false;
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}
//time complexity: O(N)

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

    cout << detectLoop(head);
    return 0;
}