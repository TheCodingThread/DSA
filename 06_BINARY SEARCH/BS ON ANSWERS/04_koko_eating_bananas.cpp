#include<bits/stdc++.h>
using namespace std;

//an induvidual named "koko" has been given a task to eat up the bananas stocked up in multiple piles in a restricted time period(in hrs). Each position in an array represents a single pile. We have to find the minimum bananas that koko has to eat per hour(using binary search) so as to eat up all the bananas while respecting the time limit.
int minBan(int arr[], int n, int p){
    int l = 1, h = *max_element(arr, arr+n);
    int a = INT_MAX;

    while(l<=h){
        int m = (l+h)/2;

        int sum = 0;
        for(int i=0; i<n; i++){
            sum += ceil((double)arr[i]/m);
        }
        
        if(sum <= p){
            h = m-1;
            a = min(a, m);
        }
        else if(sum > p) l = m+1;
    }

    return a;
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

    int p;
    cout << "Enter the parameter: ";
    cin >> p;
    
    int r = minBan(arr, n, p);
    cout << "Minimum bananas per hour: " << r << endl;

    return 0;
}