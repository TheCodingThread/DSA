#include<bits/stdc++.h>
using namespace std;

int arrUnion(int arr[], int arr2[], int n1, int n2){
    set<int> st;

    for(int i=0; i<n1; i++){
        st.insert(arr[i]);
    }

    for(int i=0; i<n2; i++){
        st.insert(arr2[i]);
    }

    int unionarr[st.size()];

    int i=0;
    for(auto it:st){
        unionarr[i++] = it;
    }

    cout << "Union of the two arrays is: ";
    for(int i=0; i<st.size(); i++){
        cout << unionarr[i] << " ";
    }
    
    cout << endl;
    return st.size();
}

int main(){
    int n1;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr[n1];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n1; i++){
        cin >> arr[i];
    }

    cout << "Enter the size of the second array: ";
    int n2;
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    int un = arrUnion(arr, arr2, n1, n2);

    cout << "The size of the union array is: " << un << endl;

    return 0;
}