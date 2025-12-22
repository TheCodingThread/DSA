#include <bits/stdc++.h>
using namespace std;

string lonComPre(vector<string>& arr, int n) {
    if (n == 0) return "";

    string prefix = arr[0];

    for (int i = 1; i < n; i++) {
        int j = 0;
        while (j < prefix.size() && j < arr[i].size() &&
               prefix[j] == arr[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j);
        if (prefix.empty()) return "";
    }
    return prefix;
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ✅ FIX

    vector<string> arr(n);
    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    string result = lonComPre(arr, n);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
