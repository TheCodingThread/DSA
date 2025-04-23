#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l1; //Initialisation

    l1.push_back(2); //Inserts 2 at the end
    l1.push_front(1); //Inserts 1 at the beginning
    //push_front operation is considered to be the cheap in time complexity

    l1.emplace_back(3); //Inserts 3 at the end
    l1.emplace_front(0); //Inserts 0 at the beginning

    // Other functions are same as vectors: begin(), end(), rbegin(), rend(), size(), empty(), insert(), erase()

    // Another container that is similar to list and vector is Dequeue
    return 0;
}