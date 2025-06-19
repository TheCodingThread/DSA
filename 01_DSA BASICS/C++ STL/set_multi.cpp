#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> ms; //initialisation
    // Multiset is similar to set but it can have multiple elements with the same value

    ms.insert(1); //includes 1 to the multiset
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2); //this will be included as multiset can have multiple elements with the same value
    ms.insert(3);
    ms.insert(4);

    ms.erase(2); //removes all 2s

    ms.erase(ms.find(1)); //removes only one 2 or the first occurrence of 2

    // Other functions: begin(), end(), rbegin(), rend(), size(), empty(), clear(), erase(), swap()
    return 0;
}
