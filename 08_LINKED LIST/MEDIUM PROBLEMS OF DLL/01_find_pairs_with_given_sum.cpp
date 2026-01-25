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
    if(arr.size() == 0) return nullptr;
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

//DLL is sorted

//brute force - travering dll by taking 2 temp
// vector<vector<int>> sumPairs(Node* head, int num){
//     vector<vector<int>> ans;
//     Node* t1 = head;
//     while(t1 != nullptr){
//         Node* t2 = t1->next;
//         while(t2 != nullptr){
//             if(t1->data + t2->data == num){
//                 ans.push_back({t1->data, t2->data});
//                 break;
//             }
//             t2 = t2->next;
//         }
//         t1 = t1->next;
//     }
//     return ans;
// }
//time complexity: O(n^2)

//optimal - place 2 pointers, one at head and other at tail
Node* findTail(Node* head){
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    return temp;
}

vector<vector<int>> sumPairs(Node* head, int num){
    vector<vector<int>> ans;
    Node* left = head;
    Node* right = findTail(head);
    while(left->data < right->data){
        if(left->data + right->data == num){
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->prev;
        }
        else if(left->data + right->data > num) right = right->prev;
        else left = left->next;
    }
    return ans;
}
//time complexity: O(n)

int main(){
    vector<int> ll = {2, 4, 6, 8};
    Node* head = arrToDoubLL(ll);
    int num;
    cout << "Enter the num: ";
    cin >> num;
    vector<vector<int>> result = sumPairs(head, num);
    for(auto i: result){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}