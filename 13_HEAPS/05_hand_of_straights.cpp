//Problem: In this, we are given an array of integers representing a hand of cards, and an integer group size. We need to determine if we can rearrange the hand into groups of consecutive cards of the specified group size.
//Solution: We can use a frequency map to count the occurrences of each card.

#include<bits/stdc++.h>
using namespace std;

bool handOfStraights(vector<int>& hand, int grpSize){
    if(hand.size() % grpSize != 0) return false;

    map<int, int> freq;
    for(int x : hand) freq[x]++;
    while(!freq.empty()){
        int start = freq.begin()->first;
        for(int x = start; x < start + grpSize; x++){
            auto it = freq.find(x);
            if(it == freq.end()) return false;
            if(--it->second == 0) freq.erase(it);
        }
    }

    return true;
}
//time complexity: O(N log N); space complexity: O(N)

int main(){
    int n, grpSize;
    cout << "Enter n: ";
    cin >> n;
    vector<int> hand;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        hand.push_back(a);
    }
    cout << "Enter group size: ";
    cin >> grpSize;
    cout << handOfStraights(hand, grpSize);
    return 0;
}