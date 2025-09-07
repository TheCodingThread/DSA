#include <bits/stdc++.h>
using namespace std;

// brute force(comparing all pairs)
// void twoSum(int arr[], int n)
// {
//     int target, help;
//     cout << "Enter the sum: ";
//     cin >> target;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > target)
//             continue; // optimization
//         else
//         {
//             if (help == i) // to avoid duplicate pairs
//                 continue;
//             else
//             {
//                 for (int j = 0; j < n; j++)
//                 {
//                     if (i == j)
//                         continue;
//                     else if (arr[i] + arr[j] == target)
//                     {
//                         cout << "Yes the sum is possible with elements at indices " << i << " and " << j << endl;
//                         help = j;
//                     }
//                 }
//             }
//         }
//     }
// }
//time complexity: O(n^2); space complexity: O(1)

//better(hashing)
// string twoSum(int arr[], int n){
//     int target; 
//     cout << "Enter the sum: ";
//     cin >> target;
//     map<int, int> mpp;
//     for(int i=0; i<n; i++){
//         int a = arr[i];
//         int b = target - a;
//         if(mpp.find(b) != mpp.end()){
//             // cout << "Yes the sum is possible with elements at indices " << mpp[b] << " and " << i << endl;
//             return "true"; // it will only return the first pair found. 
//         }
//         mpp[a] = i;
//     }
//     return "The sum is not possible with the given array";
// }
//time complexity: O(nlogn); space complexity: O(n)

//optimal(two pointer approach)
string twoSum(int arr[], int n){
    int target;
    cout << "Enter the sum: ";
    cin >> target;
    int left = 0, right = n-1;
    sort(arr, arr+n); // sorting the array
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "true";
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return "false";
}
//time complexity: O(n)+O(nlogn); space complexity: O(1)

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    string result = twoSum(arr, n);
    cout << result << endl;

    return 0;
}