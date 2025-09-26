#include<bits/stdc++.h>
using namespace std;

//brute force - using 2 vectors to store positive and negative numbers and then rearranging them in the original array
// void reArr(int arr[], int n){
//     vector<int> pos;
//     vector<int> neg;
//     for(int i=0; i<n; i++){
//         if(arr[i]>0) pos.push_back(arr[i]);
//         else neg.push_back(arr[i]);
//     }

//     for(int i=0; i<n/2; i++){
//         arr[2*i] = pos[i];
//         arr[(2*i)+1] = neg[i];
//     }
// }
//time complexity - O(n)+O(n/2); space complexity - O(n)

//optimal - using 2 pointers for pos and neg indices
vector<int> reArr(int arr[], int n){
    vector<int> ans(n);
    int posIndex = 0, negIndex = 1;
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            ans[posIndex] = arr[i];
            posIndex+=2;
        }
        else{
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
    }

    return ans;
}
//time complexity: O(n); space complexity: O(n)

//if the positives and negatives are not equal, then we use the brute force approach

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = reArr(arr, n);

    cout << "Rearranged array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}