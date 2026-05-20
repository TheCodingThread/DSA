//Problem: Given an array of integers sticks where sticks[i] is the length of the ith stick, you can connect any two sticks of lengths x and y into one stick by paying a cost of x + y. You want to connect all the sticks until there is only one stick remaining. Return the minimum cost of connecting all the given sticks into one stick.
//Solution: We can use a min heap (priority queue) to always connect the two smallest sticks first, which will minimize the total cost. We keep connecting the sticks until only one stick remains, and we keep track of the total cost incurred.

#include<bits/stdc++.h>
using namespace std;

int connectSticks(vector<int>& sticks) {
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int stick : sticks) pq.push(stick);

    int totalCost = 0;

    while (pq.size() > 1) {
        int first = pq.top();
        pq.pop();

        int second = pq.top();
        pq.pop();

        int cost = first+second;
        totalCost += cost;

        pq.push(cost);
    }

    return totalCost;
}
//time complexity: O(nlogn); space complexity: O(n);

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> sticks;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        sticks.push_back(a);
    }
    cout << connectSticks(sticks);
    return 0;
}