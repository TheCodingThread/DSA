#include<bits/stdc++.h>
using namespace std;

//brute force - linear search
// int sr(int num){
//     for(int i=0; i<num; i++){
//         if(i*i == num) return i;
//         else if(i*i > num) return i-1;
//     }
// }

//binary search
int sr(int num){
    int low = 1, high = num;
    int ans = 0;

    while(low<=high){
        int mid = (low+high)/2;
        if(mid*mid == num) return mid;
        else if(mid*mid > num) high = mid-1;
        else{
            low = mid+1;
            ans = max(ans, mid);
        }
    }

    return ans;
}

int main(){
    int num;
    cout << "Enter the integer: ";
    cin >> num;
    int result = sr(num);
    cout << "Square root(floor): " << result << endl;

    return 0;
}