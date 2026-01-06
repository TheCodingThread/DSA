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

Node* delAtk(Node* head, int k){
    if(head == nullptr) return head;
    if(head->next == nullptr){
        free(head);
        return nullptr;
    }
    if(k == 1){
        Node* temp = head;
        head = head->next;
        head->prev = nullptr;
        free(temp);
        return head;
    }
    else{
        int cnt = 0;
        Node* temp = head;
        while(temp != nullptr){
            cnt++;
            if(cnt == k){
                temp->prev->next = temp->prev->next->next;
                free(temp);
                break;
            }
            temp = temp->next;
        }
    }
    return head;
}

int main(){
    vector<int> ll = {2, 4, 6, 8};
    Node* head = arrToDoubLL(ll);
    int k;
    cout << "Enter k: ";
    cin >> k;
    head = delAtk(head, k);
    print(head);
    return 0;
}