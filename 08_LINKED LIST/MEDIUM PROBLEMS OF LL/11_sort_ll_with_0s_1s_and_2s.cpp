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

//brute force - maintain a count of 0s, 1s and 2s
// Node* sortLL(Node* head){
//     int cnt0 = 0, cnt1= 0, cnt2= 0;
//     Node* t1 = head;
//     while(t1 != nullptr){
//         if(t1->data == 0) cnt0++;
//         else if(t1->data == 1) cnt1++;
//         else cnt2++;
//         t1 = t1->next;
//     }
//     Node* t2 = head;
//     while(t2 != nullptr){
//         if(cnt0 > 0){
//             t2->data = 0;
//             cnt0--;
//         }
//         else if(cnt1 > 0){
//             t2->data = 1;
//             cnt1--;
//         }
//         else{
//             t2->data = 2;
//             cnt2--;
//         }
//         t2 = t2->next;
//     }
//     return head;
// }
//time complexity: O(2N)

//optimal - changing links
Node* sortLL(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* zero = new Node(-1, nullptr);
    Node* one = new Node(-1, nullptr);
    Node* two = new Node(-1, nullptr);
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    Node* firstZero = nullptr;
    Node* firstOne = nullptr;
    Node* firstTwo = nullptr;

    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == 0){
            cnt0++;
            if(cnt0 == 1) firstZero = temp;
            zero->next = temp;
            zero = temp;
        }
        else if(temp->data == 1){
            cnt1++;
            if(cnt1 == 1) firstOne = temp;
            one->next = temp;
            one = temp;
        }
        else{
            cnt2++;
            if(cnt2 == 1) firstTwo = temp;
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }
    if(firstZero) head = firstZero;
    else if(firstOne) head = firstOne;
    else head = firstTwo;

    zero->next = firstOne;
    one->next = firstTwo;
    two->next = nullptr;

    delete zero;
    delete one;
    delete two;
    return head;
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

    head = sortLL(head);
    print(head);
    return 0;
}