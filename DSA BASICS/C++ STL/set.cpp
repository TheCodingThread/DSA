#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s1; //initialisation
    // The elements in a set should be sorted(ascending order) and unique

    s1.insert(1); //includes 1 to the set
    s1.insert(2);
    s1.insert(2); //this will not be included as 2 is already present in the set
    s1.insert(3);
    s1.insert(4);

    // Other functions: begin(), end(), rbegin(), rend(), size(), empty(), clear(), erase(), swap()

    auto it = s1.find(3); //returns an iterator to the element 3. If the element is not present, it returns s1.end()

    // All the operations of set runs in O(log n) time complexity
    return 0;
}