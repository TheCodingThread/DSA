#include<bits/stdc++.h>
using namespace std;

// beauty of a string is the difference in frequencies between the most frequent and least frequent characters

int sumBeauty(string s) {
        int n = s.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            vector<int> fq(26, 0);
            for (int j = i; j < n; j++) {
                fq[s[j] - 'a']++;

                int mx = 0, mn = INT_MAX;
                for (int c : fq) {
                    if (c > 0) {
                        mx = max(mx, c);
                        mn = min(mn, c);
                    }
                }
                sum += (mx - mn);
            }
        }
        return sum;
    }

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    int r = sumBeauty(s);
    cout << r;

    return 0;
}