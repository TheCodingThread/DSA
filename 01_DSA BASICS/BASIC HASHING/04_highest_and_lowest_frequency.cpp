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

    int hash[13] = {0};
    for(int i = 0; i<n; i++){
        hash[arr[i]]+=1;
    }

    int query;
    cout << "Enter the number of queries: ";
    cin >> query;
    while(query--){
        int num;
        cin >> num;
        cout << "=>" << hash[num] << endl;
    }

    int max = 0;
    int min = INT_MAX;
    for(int i=0; i<13; i++){
        if(hash[i]>max){
            max = hash[i];
        }
        if(min>hash[i] && hash[i]>0){
            min = hash[i];
        }
    }
    cout << "Max frequency: " << max << endl;
    cout << "Min frequency: " << min << endl;

    return 0;
}