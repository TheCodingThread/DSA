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

Node* delnthNode(Node* head, int delNodeNum){
    if(head->next == nullptr && delNodeNum == 1) return nullptr;
    if(head == nullptr || head->next == nullptr) return head;

    Node* t1 = head;
    int llSize= 0;
    while(t1 != nullptr){
        llSize++;
        t1 = t1->next;
    }

    int actNode = (llSize-delNodeNum)+1;

    Node* t2 = head;
    int cnt = 0;
    while(t2 != nullptr){
        cnt++;
        if(cnt == actNode-1){
            t2->next = t2->next->next;
            break;
        }
        else if(actNode == 1){
            head = head->next;
            break;
        }
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

    int delNodeNum;
    cout << "Enter node number from end: ";
    cin >> delNodeNum;
    
    Node* head = arrToLL(ll);

    head = delnthNode(head, delNodeNum);
    print(head);
    return 0;
}