#include <bits/stdc++.h>
using namespace std;

// trionic array first strictly increases, then strictly decreases and finally strictly increases again.
bool isTrionic(vector<int> &nums){
    int n = nums.size();
    if (n < 3)return false;

    int i = 0;
    while (i + 1 < n && nums[i] < nums[i + 1]) i++;
    if (i == 0 || i == n - 1) return false;

    int j = i;
    while (j + 1 < n && nums[j] > nums[j + 1]) j++;
    if (j == i || j == n - 1) return false;

    int k = j;
    while (k + 1 < n && nums[k] < nums[k + 1]) k++;
    return k == n - 1;
}
//time complexity: O(n)

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    cout << isTrionic(nums) << endl;
    return 0;
}