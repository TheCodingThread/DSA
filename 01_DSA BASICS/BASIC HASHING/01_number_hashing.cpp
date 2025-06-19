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
    return 0;

    //inside main, the size of array of int elements can be upto 10^6
    //while in global space, the size of array of int elements can be upto 10^7

    //inside main, the size of array of boolean elements can be upto 10^7
    //while in global space, the size of array of boolean elements can be upto 10^8

    //if u assign a size more than the limit, it will give a segmentation fault, it is due to not able to allocate the memory
}