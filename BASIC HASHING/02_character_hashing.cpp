#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    char arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    //for lowercase array
    int hash[26] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]-'a']+=1;
    }

    int query;
    cout << "Enter the number of queries: ";
    cin >> query;
    while(query--){
        char ch;
        cin >> ch;
        cout << "=>" << hash[ch-'a'] << endl;
    }

    //for all characters
    // int hash[256] = {0};
    // for(int i=0; i<n; i++){
    //     hash[arr[i]]+=1;
    // }

    // int query;
    // cout << "Enter the number of queries: ";
    // cin >> query;
    // while(query--){
    //     char ch;
    //     cin >> ch;
    //     cout << "=>" << hash[ch] << endl;
    // }
    return 0;
}