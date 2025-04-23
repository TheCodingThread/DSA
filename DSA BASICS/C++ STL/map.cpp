#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m; //initialisation
    map<int, pair<int, int>> m1;
    map<pair<int, int>, int> m2;
    // Map is a collection of key-value pairs, where each key is unique. The elements are stored in a sorted key order.

    //Adding elements
    m[1] = 2; //key = 1, value = 2
    m.emplace(2, 3); //key = 2, value = 3
    m.insert({3, 4});
    m1[4] = {2, 3}; //key = 4, value = {2, 3}

    //Accessing elements using for-each loop
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl; //i.first represents key and i.second represents value
    }

    //Accessing elements using key
    cout << m[1] << endl; //prints 2
    cout << m[5] << endl; //prints 0 as 5 is not present

    //map works in O(logn) time complexity
    //Other functions: begin(), end(), rbegin(), rend(), size(), empty(), clear(), erase(), swap()
    return 0;
}