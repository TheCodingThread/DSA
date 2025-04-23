#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    map<int, int> hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    int query;
    cout << "Enter the number of queries: ";
    cin >> query;
    while(query--){
        int num;
        cin >> num;
        cout << "=>" << hash[num] << endl;
    }

    //remember map stores the key in sorted order

    //in all cases, the storing and fetching of elements in map takes O(log n) time
    //while in unordered_map, it takes O(1) time for best and average case. That is why the unordered_map should be the first preference
    return 0;
}