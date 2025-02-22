#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    //emplace_back is much more faster than push_back as in push_back object is first created and then copied or moved to the vector while in emplace_back object is directly created in the vector

    // pair in vector
    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(3, 4);
    // in push_back the pair that has to be added should be in curly braces while in emplace_back the curly braces are not required

    // initialising size
    vector<int> v2(5);
    //this will create a vector of size 5 with all elements as 0 or any garbage value depending on the compiler

    // creating multiple instances of element
    vector<int> v3(5, 10);
    //this will create a vector of size 5 with all elements as 10

    //copying one vector to another
    vector<int> v4(v3);

    // accessing element
    cout << v[0] << endl;

    // accessing element using iterator
    vector<int>::iterator it = v.begin();
    cout << "Element accessed using iterator: " << *(it) << endl;

    vector<int>::iterator it1 = v.end();
    //v.end() points to the next of the last element

    // accessing all the elements
    cout << endl << "Accessing all the elements:" << endl;
    for(vector<int>::iterator it2 = v3.begin(); it2 != v3.end(); it2++){
        cout << *it2 << " ";
    }
    cout << endl;

    // instead of writing vector<int>::iterator we can use auto keyword
    cout << endl << "Accessing all the elements using auto:" << endl;
    for(auto it3=v2.begin(); it3!=v2.end(); it3++){
        cout << *it3 << " ";
    }
    cout << endl;

    // accessing elements using for each loop
    cout << endl << "Accessing all the elements using for each loop:" << endl;
    for(auto it4: v){
        cout << it4 << " ";
    }
    return 0;
}