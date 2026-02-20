#include<bits/stdc++.h>
using namespace std;

int bin2Dec(string x){
    int n = x.size(), p2 = 1, num = 0;
    for(int i=n-1; i>=0; i--){
        if(x[i] == '1') num = num+p2;
        p2 = p2*2;
    }
    return num;
}
//time complexity: O(n)

int main(){
    string x;
    cout << "Enter string: ";
    cin >> x;
    cout << bin2Dec(x);
    return 0;
}