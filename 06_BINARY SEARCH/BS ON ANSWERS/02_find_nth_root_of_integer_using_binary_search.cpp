#include<bits/stdc++.h>
using namespace std;

int nthRoot(int num, int root){
    int low = 1, high = num;

    while(low <= high){
        int mid = (low+high)/2;
        if(round(pow(mid, root)) == num) return mid;
        else if(round(pow(mid, root)) > num) high = mid-1;
        else low = mid+1;
    }

    return -1;
}

int main(){
    int num, root;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the root: ";
    cin >> root;

    int result = nthRoot(num, root);
    cout << root << "th root is: " << result << endl;
    return 0;
}