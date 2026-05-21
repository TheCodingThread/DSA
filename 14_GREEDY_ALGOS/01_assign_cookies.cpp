//Problem: In this, we have g children and s cookies. Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with. Each cookie j has a size s[j]. We want to assign cookies to children in a way that maximizes the number of content children. A child i will be content if there is a cookie j such that s[j] >= g[i]. We can assign at most one cookie to each child and at most one child can be assigned to each cookie.
//Solution: We can sort both the greed factors of the children and the sizes of the cookies. Then, we can use two pointers to iterate through both arrays. For each child, we try to find the smallest cookie that can satisfy their greed factor. If we find such a cookie, we move both pointers forward; otherwise, we only move the pointer for the cookies forward to try the next larger cookie.

#include<bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s){
    int l = 0, r = 0;
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    while(l<g.size() && r<s.size()){
        if(g[l] <= s[r]) l++;
        r++;
    }
    return l;
}
//time complexity: O(nlogn)

int main(){
    int n1, n2;
    cout << "Enter number of children: ";
    cin >> n1;
    vector<int> g;
    vector<int> s;
    for(int i=0; i<n1; i++){
        int a;
        cin >> a;
        g.push_back(a);
    }
    cout << "Enter number of cookies: ";
    cin >> n2;
    for(int i=0; i<n2; i++){
        int a;
        cin >> a;
        s.push_back(a);
    }
    cout << findContentChildren(g, s);
    return 0;
}