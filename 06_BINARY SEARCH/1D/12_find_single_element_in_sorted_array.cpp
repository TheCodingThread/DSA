#include<bits/stdc++.h>
using namespace std;

//only one element occurs once while all other elements occur twice

//brute force - go through each element and check their neighbours for their occurences
// int sinEle(int arr[], int n){
//     if(n == 1) return arr[0]; //for single element arrays
//     for(int i=0; i<n; i++){
//         if(i==0){
//             if(arr[i] == arr[i+1]) continue;
//             else return arr[i];
//         }
//         else{
//             if(arr[i-1]==arr[i] || arr[i]==arr[i+1]) continue;
//             else return arr[i];
//         }
//     }
    
// }
//time complexity: O(n)

//binary search - find the element using the even/odd property of the indices
int sinEle(int arr[], int n){
    if(n==1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];
    int low = 1, high = n-2;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]) return arr[mid];
        else if(arr[mid-1] == arr[mid]){
            if(mid%2 == 0) high = mid-1;
            else low = mid+1;
        }
        else if(arr[mid] == arr[mid+1]){
            if(mid%2 == 0) low = mid+1;
            else high = mid-1;
        }
    }
}
//time complexity: O(log(2)n)

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

    int result = sinEle(arr, n);
    cout << "Single element: " << result << endl;

    return 0;
}