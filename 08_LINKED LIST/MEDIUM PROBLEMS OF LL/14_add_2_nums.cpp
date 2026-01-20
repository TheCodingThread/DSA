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

Node* addTwoNumbers(Node* l1, Node* l2) {
        Node dummy(0, nullptr);
        Node* curr = &dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;

            if (l1) {
                sum += l1->data;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->data;
                l2 = l2->next;
            }

            carry = sum / 10;
            curr->next = new Node(sum % 10, nullptr);
            curr = curr->next;
        }

        return dummy.next;
    }