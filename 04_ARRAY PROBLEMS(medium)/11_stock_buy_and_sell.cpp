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