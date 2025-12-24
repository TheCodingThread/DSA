#include<bits/stdc++.h>
using namespace std;

//brute force - shift s by one chan at a time until it becomes equal to goal
// bool rotStr(string s, string goal){
//     int sz = s.size();
//     int i = 0;
//     if(s == goal) return true;
//     while(i < sz){
//         int fr = s[0];
//         // for(int j=0; j<s.size(); j++){
//         //     if(j == sz-1) s[j] = fr;
//         //     else s[j] = s[j+1];
//         // }
//         rotate(s.begin(), s.begin()+1, s.end()); //first para for the starting range, second para for the element that would take the first position in string after rotation and the last para for the ending range

//         if(s == goal) return true;
//         else i++;
//     }

//     return false;
// }
//time complexity: O(n^2)

//optimised - KMP
bool rotStr(string s, string goal){
    int m = s.size();
    int n = goal.size();

    if(m != n) return false;
    else{
        if((s+s).find(goal) != string::npos) return true;
    }

    return false;
}
//time complexity: O(m)

int main(){
    string s, goal;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> goal;

    bool result = rotStr(s, goal);
    cout << result << endl;

    return 0;
}