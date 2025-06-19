#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> p = {1, 3};
    cout << p.first << endl<< p.second << endl;
    cout << endl;

    //for more than 2 elements
    pair<int, pair<int, int>> q = {1, {2, 3}};
    cout << q.first << endl << q.second.first << endl << q.second.second << endl;
    cout << endl;

    // creating array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout << arr[2].first << endl << arr[2].second << endl;
    return 0;
}