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
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

//brute force - first reversing it, then applying required operations and then again reversing it
// Node* reverseLL(Node* head){
//     if(head == nullptr || head->next == nullptr) return head;
//     Node* newHead = reverseLL(head->next);
//     Node* front = head->next;
//     front->next = head;
//     head->next = nullptr;
//     return newHead;
// }

// Node* addOne(Node* head){
//     if(head == nullptr) return new Node(1, nullptr);
//     Node* newHead = reverseLL(head);
//     Node* temp = newHead;
//     int carry = 1;
//     while(temp != nullptr){
//         if(temp->next == nullptr){
//             temp->data = temp->data + carry;
//             carry = 0;
//         }
//         else{
//             int sum = temp->data + carry;
//             temp->data = sum%10;
//             carry = sum/10;
//         }
//         if(carry > 0) temp = temp->next;
//         else break;
//     }
//     head = reverseLL(newHead);
//     return head;
// }
//time complexity: O(3N)

//optimal - without reversing the linked list
int addCarry(Node* head){
    if(head == nullptr) return 1;
    int carry = addCarry(head->next);
    int sum = head->data + carry;
    head->data = sum%10;
    return sum/10;
}

Node* addOne(Node* head){
    if(head == nullptr) return new Node(1, nullptr);
    int result = addCarry(head);
    if(result == 1){
        Node* newNode = new Node(1, head);
        head = newNode;
    }
    return head;
}
//time complexity: O(N); space complexity: O(N)[recursive stack]

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

    head = addOne(head);
    print(head);
    return 0;
}