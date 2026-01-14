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

//brute force - take a list and store odd indexed node first followed by the even indexed node and then replace the node's value with the list elements
// Node* oddEvenList(Node* head){
//     list<int> l;
//     Node* tOdd = head;
//     while(tOdd != nullptr){
//         l.push_back(tOdd->data);
//         if(tOdd->next == nullptr) break;
//         tOdd = tOdd->next->next;
//     }
//     Node* tEven = head->next;
//     while(tEven != nullptr){
//         l.push_back(tEven->data);
//         if(tEven->next == nullptr) break;
//         tEven = tEven->next->next;
//     }
    
//     Node* temp = head;
//     for(auto i: l){
//         temp->data = i;
//         temp = temp->next;
//     }
//     return head;
// }
//time complexityL O(2N); space complexity: O(N)

//optimal - space optimisation
Node* oddEvenList(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;
    while(even != nullptr && even->next != nullptr){
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
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

    head = oddEvenList(head);
    print(head);
    return 0;
}