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

//brute force - multiset
// Node* sortLL(Node* head){
//     if(head == nullptr || head->next == nullptr) return head;
//     multiset<int> ms;
//     Node* t1 = head;
//     while(t1 != nullptr){
//         ms.insert(t1->data);
//         t1 = t1->next;
//     }
//     Node* t2 = head;
//     for(auto i: ms){
//         t2->data = i;
//         t2 = t2->next;
//     }
//     return head;
// }
//time complexity: O(NlogN); space complexity: O(N)

//optimal - merge sort(space optimisation)
Node* merge(Node* left, Node* right){
    Node* tempNode = new Node(-1, nullptr);
    Node* temp = tempNode;
    while(left != nullptr && right != nullptr){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    if(left) temp->next = left;
    else temp->next = right;

    return tempNode->next;
}

Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head->next; //to get the first middle in even number of nodes
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* sortLL(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* middle = findMid(head);
    Node* left = head;
    Node* right = middle->next;
    middle->next = nullptr;
    
    left = sortLL(left);
    right = sortLL(right);
    return merge(left, right);
}
//time complexity: O(3N/2 logN)

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