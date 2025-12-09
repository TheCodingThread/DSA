#include<bits/stdc++.h>
using namespace std;

//similar as finding the minimum but have to track the index of the minimum element and then finally return it
int findRot(int arr[], int n){
    int ans = INT_MAX, loc = -1;
    int low = 0, high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low] <= arr[mid]){
            ans = min(ans, arr[low]);
            if(arr[low] == ans) loc = low;
            low = mid+1;
        }
        else{
            ans = min(ans, arr[mid]);
            if(arr[mid] == ans) loc = mid;
            high = mid-1;
        }
    }

    return loc;
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

    int result = findRot(arr, n);
    cout << "No. of rotations: " << result << endl;

    return 0;
}