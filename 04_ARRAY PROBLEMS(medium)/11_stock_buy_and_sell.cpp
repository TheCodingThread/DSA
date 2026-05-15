//Problem: In this, we are given an array of integers representing the stock prices on different days. We need to find the maximum profit that can be achieved by buying and selling the stock on different days.
//Solution: We can keep track of the minimum price seen so far and calculate the profit for each price by subtracting the minimum price from the current price. We can update the maximum profit accordingly.

#include<bits/stdc++.h>
using namespace std;

int stockProfit(vector<int>& prices){
    int min = INT_MAX;
    int maxProfit = INT_MIN;
    for(int i=0; i<prices.size(); i++){
        if(prices[i] < min) min = prices[i];
        maxProfit = max(maxProfit, prices[i]-min);
    }
    return maxProfit;
}
//time complexity: O(N); space complexity: O(1)

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> prices;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        prices.push_back(a);
    }
    cout << stockProfit(prices);
    return 0;
}