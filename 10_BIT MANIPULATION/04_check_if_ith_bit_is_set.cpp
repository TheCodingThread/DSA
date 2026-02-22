#include<bits/stdc++.h>
using namespace std;

//using left shift
// bool bitSetOrNot(int n, int i){
//     return (n & (1<<i)) != 0;
// }

//using right shift
bool bitSetOrNot(int n, int i){
    return ((n>>i) & 1) != 0;
}
//time complexity: O(1)

int main(){
    int n, i;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter bit number: ";
    cin >> i;
    cout << bitSetOrNot(n, i);
    return 0;
}