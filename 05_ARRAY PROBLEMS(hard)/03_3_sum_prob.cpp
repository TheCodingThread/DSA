#include<bits/stdc++.h>
using namespace std;

//brute force
// set<vector<int>> threeSum(int arr[], int n){
//     int sum;
//     cout << "Enter the sum of the 3 elements: ";
//     cin >> sum;
//     set<vector<int>> st;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(arr[i]+arr[j]+arr[k] == sum) {
//                     vector<int> temp = {arr[i], arr[j], arr[k]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }
//     return st;
// }
//time complexity: O(n^3); space complexity: O(2*(no. of triplets))

//better - hashing
// set<vector<int>> threeSum(int arr[], int n){
//     int sum;
//     cout << "Enter the sum of the 3 elements: ";
//     cin >> sum;
//     set<vector<int>> st;
//     for(int i=0; i<n; i++){
//         set<int> hash;
//         for(int j=i+1; j<n; j++){
//             int k = -(arr[i]+arr[j]);
//             if(hash.find(k) != hash.end()){
//                 vector<int> temp = {arr[i], arr[j], k};
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }
//             hash.insert(arr[j]);
//         }
//     }
//     return st;
// }
//time complexity: O(n^2); space complexity: O(n)+O(2*no. of unique triplets)

//optimal - two pointer
vector<vector<int>> threeSum(int arr[], int n){
    int sum;
    cout << "Enter the sum of the 3 elements: ";
    cin >> sum;
    sort(arr, arr+n);
    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while(j<k){
            int checkSum = arr[i]+arr[j]+arr[k];
            if(checkSum < 0) j++;
            else if(checkSum > 0) k--;
            else{
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++, k++;
                while(j<k && arr[j] == arr[j-1]) j++;
                while(j<k && arr[k] == arr[k+1]) k--;
            }
        }
    }
    return ans;
}
//time complexity: O(n^2); space complexity: O(no. of unique triplets)

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

    // set<vector<int>> result = threeSum(arr, n);
    vector<vector<int>> result = threeSum(arr, n);
    for(auto i:result){
        for(auto j:i) cout << j << " ";
        cout << endl;
    }

    return 0;
}