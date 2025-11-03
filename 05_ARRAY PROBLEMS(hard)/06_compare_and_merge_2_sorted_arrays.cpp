#include<bits/stdc++.h>
using namespace std;

//brute force
// void mergeArrays(int arr1[], int arr2[], int n1, int n2){
//     int arr3[n1+n2];
//     int left = 0; 
//     int right = 0;
//     int index = 0;
//     while(left < n1 && right < n2){
//         if(arr1[left] <= arr2[right]) arr3[index++] = arr1[left++];
//         else arr3[index++] = arr2[right++];
//     }
//     while(left < n1) arr3[index++] = arr1[left++];
//     while(right < n2) arr3[index++] = arr2[right++];
//     for(int i=0; i<n1+n2; i++){
//         if(i<n1) arr1[i] = arr3[i];
//         else arr2[i-n1] = arr3[i];
//     }
// }
//time complexity: O(n1+n2)+O(n1+n2); space complexity: O(n1+n2)

//optimal- 2 pointer approach
void mergeArrays(int arr1[], int arr2[], int n1, int n2){
    int left = n1-1; 
    int right = 0;
    while(left>=0 && right<n2){
        if(arr1[left]>arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else if(arr1[left]<arr2[right]) break;
    }
    sort(arr1, arr1+n1);
    sort(arr2, arr2+n2);
}
//time complexity: O(min(n1, n2)) + O(nlogn) + O(mlogm); space complexity: O(1)

int main(){
    int n1, n2;
    cout << "Enter the size of Array 1: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements: ";
    for(int i=0; i<n1; i++){
        cin >> arr1[i];
    }
    cout << "Enter the size of Array 2: ";
    cin >> n2;
    cout << "Enter the elements: ";
    int arr2[n2];
    for(int i=0; i<n2; i++){
        cin >> arr2[i];
    }


    mergeArrays(arr1, arr2, n1, n2);

    cout << "Merged sorted arrays are: " << endl;
    for(int i=0; i<n1; i++){
        cout << arr1[i] << " ";
    }
    for(int i=0; i<n2; i++){
        cout << arr2[i] << " ";
    }

    return 0;
}