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

int searchEle(Node* head, int ele){
    Node* temp = head;
    while(temp){
        if(temp->data == ele) return 1;
        temp = temp->next;
    }
}

int main(){
    vector<int> ll = {2, 4, 6, 8};
    Node* head = arrToLL(ll);
    int ele;
    cout << "Enter the element to search: ";
    cin >> ele;
    cout << searchEle(head, ele);
    return 0;
}