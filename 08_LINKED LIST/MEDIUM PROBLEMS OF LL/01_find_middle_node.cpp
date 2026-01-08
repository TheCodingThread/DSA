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

Node* midNode(Node* head){
    if(head == nullptr || head->next == nullptr) return head;

    Node* t1 = head;
    int llSize= 0;
    while(t1 != nullptr){
        llSize++;
        t1 = t1->next;
    }

    Node* t2 = head;
    int mid = llSize/2;
    int cnt = 0;
    while(t2 != nullptr){
        cnt++;
        if(cnt > mid) return t2;
        t2 = t2->next;
    }

    return head;
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

    head = midNode(head);
    cout << head->data;
    return 0;
}