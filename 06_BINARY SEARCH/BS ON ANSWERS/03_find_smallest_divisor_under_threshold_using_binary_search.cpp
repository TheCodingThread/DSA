#include<bits/stdc++.h>
using namespace std;

int smlDiv(int arr[], int n){
    int low = 1, high = *max_element(arr, arr+n);
    int ans = INT_MAX;

    int thres;
    cout << "Enter the threshold value: ";
    cin >> thres;

    while(low <= high){
        int mid = (low+high)/2;

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += ceil((double)arr[i]/mid);
        }

        if(sum <= thres){
            high = mid-1;
            ans = min(ans, mid);
        }
        else if(sum > thres) low = mid+1;
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

    int result = smlDiv(arr, n);
    cout << "The smallest divisor is: " << result << endl;

    return 0;
}