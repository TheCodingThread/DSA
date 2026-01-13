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

//brute force - using stack
// bool isPalindrome(Node* head){
//     stack<int> st;
//     Node* temp = head;
//     while(temp != nullptr){
//         st.push(temp->data);
//         temp = temp->next;
//     }
    
//     Node* comTemp = head;
//     while(comTemp != nullptr){
//         if(comTemp->data == st.top()) {
//             comTemp = comTemp->next;
//             st.pop();
//         }
//         else return false;
//     }
//     return true;
// }
//time complexity: O(2N); space complexity: O(N)

//optimal - tortoise and hare algo
Node* reverseLL(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* newHead = reverseLL(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = nullptr;
    return newHead;
}

bool isPalindrome(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* slow = head;
    Node* fast = head;
    while(fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* newHead = reverseLL(slow->next);
    Node* first = head;
    Node* sec = newHead;
    while(sec != nullptr){
        if(first->data != sec->data){
            reverseLL(newHead);
            return false;
        }
        first = first->next;
        sec = sec->next;
    }
    reverseLL(newHead);
    return true;
}

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

    bool result = isPalindrome(head);
    cout << result;
    return 0;
}