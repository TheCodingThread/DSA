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

//brute force - hashing
int loopLen(Node* head){
    if(head == nullptr) return 0;
    unordered_map<Node*, int> mpp;
    Node* temp = head;
    int t = 0;
    while(temp != nullptr){
        t++;
        if(mpp.find(temp) != mpp.end()) return t-mpp[temp];
        else mpp[temp] = t;
        temp = temp->next;
    }
    return 0;
}
//time complexity: O(2N); space complexity: O(N)

//optimal - tortoise and hare algo(space optimisation)
int loopLen(Node* head){
    if(head == nullptr) return 0;
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            int cnt = 0;
            fast = fast->next;
            while(slow != fast){
                cnt++;
                fast = fast->next;
            }
            return cnt+1;
        }
    }
    return 0;
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

    int result = loopLen(head);
    cout << result;
    return 0;
}