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

//brute force - hashing
// Node* intersectNode(Node* headA, Node* headB){
//     unordered_map<Node*, int> um;
//     Node* tA = headA;
//     int cnt = 0;
//     while(tA != nullptr){
//         cnt++;
//         um[tA]++;
//         tA = tA->next;
//     }

//     Node* tB = headB;
//     while(tB != nullptr){
//         if(um.find(tB) != um.end()) return tB;
//         tB = tB->next;
//     }

//     return nullptr;
// }
//time complexity: O(NA+NB); space complexity: O(NA)

//optimal - 2 pointer approach where each pointer will be at the heads of both the linked list. Then one of the pointers will be forced to move certain steps such that both the pointers are at the same level and then start traversing and comparing
Node* intersectNode(Node* headA, Node* headB){
    if(!headA or !headB) return nullptr;
    Node* tA = headA;
    int cntA = 0;
    while(tA != nullptr){
        cntA++;
        tA = tA->next;
    }

    Node* tB = headB;
    int cntB = 0;
    while(tB != nullptr){
        cntB++;
        tB = tB->next;
    }

    if(cntA == 1 && cntB == 1) return headA;

    Node* tempA = headA;
    Node* tempB = headB;

    if(cntA > cntB){
        int d = cntA-cntB;
        for(int i=0; i<d; i++){
            tempA = tempA->next;
        }
    }
    else if(cntB > cntA){
        int d = cntB-cntA;
        for(int i=0; i<d; i++){
            tempB = tempB->next;
        }
    }

    while(tempA != nullptr){
        if(tempA == tempB) return tempA;
        tempA = tempA->next;
        tempB = tempB->next;
    }

    return nullptr;
}
//time complexity: O(2NA + NB + d)