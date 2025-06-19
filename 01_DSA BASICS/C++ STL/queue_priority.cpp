#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq; //initialisation
    // Priority Queue is a type of queue in which the largest element is always at the front. In this, the elements are not stored in a linear fashion instead they are stored in a tree manner

    pq.push(4); //includes 1 to the priority queue
    pq.push(7);
    pq.push(2);

    cout << "Top element: " << pq.top() << endl; //prints 7

    pq.pop(); //removes the top element

    // Other functions: empty(), size(), swap()

    // If we want to create a priority queue in which the smallest element is at the front-
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(4);
    pq1.push(7);
    pq1.push(2);

    cout << "Top element: " << pq1.top() << endl; //prints 2

    // The operations of priority queue, that is, push and pop runs in O(log n) time complexity while top runs in O(1) time complexity
    return 0;
}