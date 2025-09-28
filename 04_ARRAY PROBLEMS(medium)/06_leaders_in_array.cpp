#include<bits/stdc++.h>
using namespace std;

//leaders are those elements which are greater than all the elements to their right side

//brute force - traversing through all the elements and checking it with all the elements on the right side
// vector<int> leader(int arr[], int n){
//     vector<int> ans;
//     for(int i=0; i<n; i++){
//         int leader = true;
//         for(int j=i+1; j<n; j++){
//             if(arr[j]>arr[i]){
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader == true) ans.push_back(arr[i]);
//     }
//     return ans;
// }
//time complexity: O(N^2); space complexity: O(N)

//optimal - back traversing the array and comparing
vector<int> leader(int arr[], int n){
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i=n-1; i>=0; i--){
        if(arr[i] > maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    return ans;
}

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

    vector<int> result = leader(arr, n);
    cout << "Leaders in the array are: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}