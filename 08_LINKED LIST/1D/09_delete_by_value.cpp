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

Node* delEl(Node* head, int el){
    if(head == nullptr) return head;
    if(head->data == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node* temp = head;
    Node* prv = nullptr;

    while(temp!=nullptr){
        if(temp->data == el){
            prv->next = prv->next->next;
            free(temp);
            break;
        }
        prv = temp;
        temp = temp->next;
    }
    return head;
    
}

int main(){
    vector<int> ll = {2, 4, 6, 8};
    Node* head = arrToLL(ll);
    int el;
    cout << "Enter the value: ";
    cin >> el;
    head = delEl(head, el);
    print(head);
    return 0;
}