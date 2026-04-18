//Problem: Merge k Sorted Lists
//Solution: We can use a min-heap (priority queue) to efficiently merge the k sorted lists. We will push the head of each list into the min-heap, and then repeatedly pop the smallest element from the heap and add it to our merged list. If the popped element has a next node, we will push that next node into the heap. This process continues until the heap is empty.
//We used 'compare' struct instead of greater<ListNode*> as greater<ListNode*> would check if the memory address of Node A is "greater than" the memory address of Node B and not the actual values.

#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr){}
};

struct compare{
    bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val; //Min-heap logic
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;

        for(ListNode* list: lists){
            if(list != nullptr) pq.push(list);
        }

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while(!pq.empty()){
            ListNode* smallest = pq.top();
            pq.pop();

            tail->next = smallest;
            tail = tail->next;

            if(smallest->next != nullptr) pq.push(smallest->next);
        }

        return dummy->next;
    }
};
//time complexity: O(N log k); space complexity: O(k)